@class NSData;

@interface MMLiteAppEncryptMetaData : NSObject

@property (nonatomic) unsigned int algorithm;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *tag;
@property (retain, nonatomic) NSData *iv;
@property (retain, nonatomic) NSData *aad;

- (id)init;
- (void).cxx_destruct;

@end
