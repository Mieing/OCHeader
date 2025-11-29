@class NSString, BaseResponse;

@interface PersonalizedAdSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *status;
@property (nonatomic) unsigned int operateType;

+ (void)initialize;

@end
