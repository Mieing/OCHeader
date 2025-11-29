@class NSNumber, NSData;

@interface WCNotificationEncryptionInfo : NSObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *privateKey;

+ (id)defaultEncryptionInfo;
+ (id)encryptionInfoWithInfos:(id)a0 error:(id *)a1;
+ (id)infoFromDictionary:(id)a0;

- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;
- (id)dictionary;
- (id)description;
- (void).cxx_destruct;

@end
