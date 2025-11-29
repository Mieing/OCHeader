@class NSMutableArray, BaseResponse;

@interface WeVisVoipSwitchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *newConfigList;

+ (void)initialize;

@end
