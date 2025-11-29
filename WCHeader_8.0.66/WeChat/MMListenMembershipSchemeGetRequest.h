@class BaseRequest, NSString, MMListenItem;

@interface MMListenMembershipSchemeGetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *musicAppid;
@property (nonatomic) BOOL allowCache;
@property (nonatomic) int requestScene;
@property (retain, nonatomic) MMListenItem *listenCtx;

+ (void)initialize;

@end
