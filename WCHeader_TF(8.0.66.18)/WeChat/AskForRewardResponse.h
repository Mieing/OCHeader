@class NSString, BaseResponse;

@interface AskForRewardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *appId;

+ (void)initialize;

@end
