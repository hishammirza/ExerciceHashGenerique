#include "hash.h"

#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;

/* ---------------------------- resultats attendus ---------------------------------------
sha256
"","E3B0C44298FC1C149AFBF4C8996FB92427AE41E4649B934CA495991B7852B855",
"a", "CA978112CA1BBDCAFAC231B39A23DC4DA786EFF8147C4E72B9807785AFEE48BB",
"abc", "BA7816BF8F01CFEA414140DE5DAE2223B00361A396177A9CB410FF61F20015AD",
"message digest", "F7846F55CF23E14EEBEAB5B4E1550CAD5B509E3348FBC4EFA3A1413D393CB650",
"abcdefghijklmnopqrstuvwxyz", "71C480DF93D6AE2F1EFAD1447C66C9525E316218CF51FC8D9ED832F2DAF18B73",
"The quick brown fox jumps over the lazy dog", "D7A8FBB307D7809469CA9ABCB0082E4F8D5651E46D3CDB762D02D0BF37C9E592",
"abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq", "248D6A61D20638B8E5C026930C3E6039A33CE45964FF2167F6ECEDD419DB06C1",
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", "DB4BFCBD4DA0CD85A60C3C37D3FBD8805C77F15FC6B1FDFE614EE0A7C8FDB4C0",
"12345678901234567890123456789012345678901234567890123456789012345678901234567890", "F371BC4A311F2B009EEF952DD83CA80E2B60026C8E935592D0F9C308453C813E",

sha3_256
"", "A7FFC6F8BF1ED76651C14756A061D662F580FF4DE43B49FA82D80A4B80F8434A",
"a", "80084BF2FBA02475726FEB2CAB2D8215EAB14BC6BDD8BFB2C8151257032ECD8B",
"abc", "3A985DA74FE225B2045C172D6BD390BD855F086E3E9D525B46BFE24511431532",
"message digest", "EDCDB2069366E75243860C18C3A11465ECA34BCE6143D30C8665CEFCFD32BFFD",
"abcdefghijklmnopqrstuvwxyz", "7CAB2DC765E21B241DBC1C255CE620B29F527C6D5E7F5F843E56288F0D707521",
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", "A79D6A9DA47F04A3B9A9323EC9991F2105D4C78A7BC7BEEB103855A7A11DFB9F",
"12345678901234567890123456789012345678901234567890123456789012345678901234567890", "293E5CE4CE54EE71990AB06E511B7CCD62722B1BEB414F5FF65C8274E0F5BE1D",
"The quick brown fox jumps over the lazy dog", "69070DDA01975C8C120C3AADA1B282394E7F032FA9CF32F4CB2259A0897DFC04",

keccak_256
"", "C5D2460186F7233C927E7DB2DCC703C0E500B653CA82273B7BFAD8045D85A470",
"a", "3AC225168DF54212A25C1C01FD35BEBFEA408FDAC2E31DDD6F80A4BBF9A5F1CB",
"abc", "4E03657AEA45A94FC7D47BA826C8D667C0D1E6E33A64A036EC44F58FA12D6C45",
"message digest", "856AB8A3AD0F6168A4D0BA8D77487243F3655DB6FC5B0E1669BC05B1287E0147",
"abcdefghijklmnopqrstuvwxyz", "9230175B13981DA14D2F3334F321EB78FA0473133F6DA3DE896FEB22FB258936",
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", "6E61C013AEF4C6765389FFCD406DD72E7E061991F4A3A8018190DB86BD21EBB4",
"12345678901234567890123456789012345678901234567890123456789012345678901234567890", "1523A0CD0E7E1FAABA17E1C12210FABC49FA99A7ABC061E3D6C978EEF4F748C4",
"The quick brown fox jumps over the lazy dog", "4D741B6F1EB29CB2A9B9911C82F56FA8D73B04959D3D9D222895DF6C0B28AA15",

*/

int main(int argc, char *argv[])
{
	std::vector<string> test_vector = {"", 
		"a", 
		"abc", 
		"message digest", 
		"abcdefghijklmnopqrstuvwxyz", 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
		"12345678901234567890123456789012345678901234567890123456789012345678901234567890", 
		"The quick brown fox jumps over the lazy dog"
	};

	string output;

	for (auto it = test_vector.begin(); it<test_vector.end(); it++){
		output=hash(*it);

		cout <<  "hashName_V" << version() << "()" << "('"<< *it << "'):" << output << endl;

	}

}

