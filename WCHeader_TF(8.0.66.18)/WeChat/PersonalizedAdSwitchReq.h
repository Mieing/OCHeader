@class BaseRequest;

@interface PersonalizedAdSwitchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int operateType;

+ (void)initialize;

@end
