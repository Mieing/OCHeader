@class BaseRequest, NSString, ChatToolInfo, NSMutableArray, WxaAppmsgSignature3rd;

@interface WxaAppGetShareInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *shareName;
@property (nonatomic) BOOL isUpdatablemsg;
@property (retain, nonatomic) NSString *activityInfo;
@property (nonatomic) BOOL isTodomsg;
@property (retain, nonatomic) NSString *todoActivityId;
@property (nonatomic) BOOL isSecretmsg;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) WxaAppmsgSignature3rd *wxaSignature3Rd;
@property (nonatomic) BOOL isChattoolmsg;
@property (retain, nonatomic) ChatToolInfo *chatToolInfo;

+ (void)initialize;

@end
