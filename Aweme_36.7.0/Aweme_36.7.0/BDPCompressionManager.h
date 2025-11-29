@interface BDPCompressionManager : NSObject

+ (BOOL)decompressTarXzAtPath:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (BOOL)decompressTarXz:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (BOOL)decompressXzAtPath:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (id)decompressXzAtPath:(id)a0 error:(id *)a1;
+ (BOOL)compressToTarXzAtPath:(id)a0 toDestination:(id)a1 error:(id *)a2;
+ (BOOL)compressDataToXzWithPath:(id)a0 toCompressdata:(id)a1 error:(id *)a2;
+ (void)compressionMonitor:(long long)a0 decoded:(BOOL)a1 decompressed:(BOOL)a2 untarred:(BOOL)a3 caller:(long long)a4;
+ (void)compressionSucceedMonitor:(long long)a0 caller:(long long)a1;
+ (void)decodeFailedMonitor:(long long)a0 caller:(long long)a1;
+ (void)decompressedFailedMonitor:(long long)a0 caller:(long long)a1;
+ (void)untarFailedMonitor:(long long)a0 caller:(long long)a1;

@end
