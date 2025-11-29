@class SwitchBlockList, BaseResponse;

@interface GetUserSwitchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SwitchBlockList *switchBlockList;

+ (void)initialize;

@end
