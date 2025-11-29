@class BaseRequest;

@interface HearingAidModeSetReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long mode;

+ (void)initialize;

@end
