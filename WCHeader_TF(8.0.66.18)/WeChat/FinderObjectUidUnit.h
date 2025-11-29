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

@end
