@class BaseRequest, NSString;

@interface PushWxPluginStatInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int statType;
@property (nonatomic) unsigned long long wwCorpid;
@property (nonatomic) unsigned long long appid;
@property (nonatomic) unsigned long long vid;
@property (nonatomic) unsigned int wxuin;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int operation;
@property (nonatomic) unsigned long long flag;
@property (nonatomic) unsigned long long reportTime;
@property (nonatomic) unsigned int platform;
@property (retain, nonatomic) NSString *osVer;

+ (void)initialize;

@end
