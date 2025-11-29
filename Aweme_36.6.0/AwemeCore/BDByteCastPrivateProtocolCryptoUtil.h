@class NSString;

@interface BDByteCastPrivateProtocolCryptoUtil : NSObject

@property (copy, nonatomic) NSString *seedString;

+ (id)getSeed;
+ (id)getMemoryCacheSeed;
+ (id)getPrivateKey:(id)a0;
+ (id)getSharedKey:(id)a0 privateKey:(id)a1;
+ (id)compressSharedKey:(id)a0;
+ (id)encrypt:(id)a0 key:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)decrypt:(id)a0 key:(id)a1 iv:(id)a2 error:(id *)a3;
+ (id)simpleEncrypt:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)getRandomIV16;
+ (id)addPrefix:(id)a0 iv:(id)a1;
+ (id)base64Encode:(id)a0;
+ (id)simpleDecrypt:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)base64Decode:(id)a0;
+ (id)removePrefix:(id)a0 iv:(id *)a1;
+ (id)getDiskCacheSeed;
+ (id)getPrivateKey;
+ (id)getCompressedSharedKey:(id)a0 privateKey:(id)a1;
+ (id)convertNSDataToJavaArray:(id)a0;
+ (id)convertJavaArrayToNSData:(id)a0;
+ (id)encrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)decrypt:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)simpleEncrypt:(id)a0 key:(id)a1;
+ (id)simpleDecrypt:(id)a0 key:(id)a1;
+ (id)sharedInstance;
+ (id)getPublicKey:(id)a0;

- (void).cxx_destruct;

@end
