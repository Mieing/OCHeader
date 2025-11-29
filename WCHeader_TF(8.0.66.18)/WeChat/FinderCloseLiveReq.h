@class BaseRequest, NSString;

@interface FinderCloseLiveReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
