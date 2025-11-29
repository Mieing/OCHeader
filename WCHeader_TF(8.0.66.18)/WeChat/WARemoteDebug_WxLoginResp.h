@class WARemoteDebug_BaseResp, WARemoteDebug_RoomInfo;

@interface WARemoteDebug_WxLoginResp : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseResp *baseResponse;
@property (retain, nonatomic) WARemoteDebug_RoomInfo *roomInfo;

+ (void)initialize;

@end
