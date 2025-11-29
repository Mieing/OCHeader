@interface SecureNotify : NSObject

+ (id)decodeSecureActionNotifyData:(id)a0 extraData:(id)a1;
+ (id)decodeSecureNotifyData:(char *)a0 length:(unsigned long long)a1;
+ (id)decodeDataWithEncryptAlgo:(unsigned int)a0 encryptVer:(unsigned int)a1 encryptSalt:(unsigned int)a2 compressAlgo:(unsigned int)a3 compressVer:(unsigned int)a4 compressLen:(unsigned int)a5 checkSum:(unsigned int)a6 data:(id)a7;

@end
