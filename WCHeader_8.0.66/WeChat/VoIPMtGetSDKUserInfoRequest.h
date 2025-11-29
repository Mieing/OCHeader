@class BaseRequest, NSMutableArray, NSString;

@interface VoIPMtGetSDKUserInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *voipsdkUsername;
@property (retain, nonatomic) NSString *wxGroupid;

+ (void)initialize;

@end
