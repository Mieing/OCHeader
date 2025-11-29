@interface EAccountOCAESCrypt : NSObject

+ (id)AES128DecryptWithKey:(id)a0 gIv:(id)a1 decrypData:(id)a2;
+ (id)AES128EncryptWithKey:(id)a0 gIv:(id)a1 messageData:(id)a2;
+ (id)dataForHexString:(id)a0;
+ (id)decrypt:(id)a0 password:(id)a1;
+ (id)encrypt:(id)a0 password:(id)a1;
+ (id)hex:(id)a0 useLower:(BOOL)a1;

@end
