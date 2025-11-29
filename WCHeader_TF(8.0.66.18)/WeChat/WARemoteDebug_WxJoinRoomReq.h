@class WARemoteDebug_BaseReq, NSString;

@interface WARemoteDebug_WxJoinRoomReq : WXPBGeneratedMessage

@property (retain, nonatomic) WARemoteDebug_BaseReq *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *wxpkgInfo;

+ (void)initialize;

@end
