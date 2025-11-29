@class NSString, NSData;

@interface FinderObjectUidUnit : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int adFlag;
@property (retain, nonatomic) NSData *objectCookie;
@property (retain, nonatomic) NSString *encryptedObjectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectProductId;

+ (void)initialize;

- (void)setObjectProductId:(unsigned long long)a0;
- (unsigned long long)objectProductId;
- (void)setLiveId:(unsigned long long)a0;
- (unsigned long long)liveId;
- (void)setEncryptedObjectId:(id)a0;
- (id)encryptedObjectId;
- (void)setObjectCookie:(id)a0;
- (id)objectCookie;
- (void)setAdFlag:(unsigned int)a0;
- (unsigned int)adFlag;
- (void)setObjectNonceId:(id)a0;
- (id)objectNonceId;
- (void)setObjectId:(unsigned long long)a0;
- (unsigned long long)objectId;

@end
