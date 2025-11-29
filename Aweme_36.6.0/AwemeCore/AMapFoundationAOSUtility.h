@interface AMapFoundationAOSUtility : NSObject

+ (id)newEncryptedStringWithInput:(id)a0 xxteaKey:(id)a1;
+ (id)signStringWithParams:(id)a0 signatureParams:(id)a1 serverKey:(id)a2;
+ (id)encryptedStringWithInput:(id)a0 xxteaKey:(id)a1;
+ (id)decryptedStringWithInput:(id)a0 xxteaKey:(id)a1;
+ (id)generate16ByteUUID;

@end
