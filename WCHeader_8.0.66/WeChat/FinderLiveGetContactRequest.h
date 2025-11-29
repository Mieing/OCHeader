@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveContactExtRelationInfo;

@interface FinderLiveGetContactRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSData *liveContactExtInfo;
@property (retain, nonatomic) FinderLiveContactExtRelationInfo *extRelInfo;

+ (void)initialize;

@end
