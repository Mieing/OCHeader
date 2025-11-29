@class PluginSwitchInfoList, BaseResponse;

@interface GetPluginSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PluginSwitchInfoList *switchList;

+ (void)initialize;

@end
