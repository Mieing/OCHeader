@class BaseRequest, SnsActionGroup, NSString, SKBuiltinString_t;

@interface SnsADCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SnsActionGroup *action;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) SKBuiltinString_t *snsAduxInfo;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) SKBuiltinString_t *snsStatExt;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *supportCapability;
@property (retain, nonatomic) NSString *vangoghLibVersion;

+ (void)initialize;

@end
