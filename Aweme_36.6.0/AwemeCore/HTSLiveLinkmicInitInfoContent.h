@class HTSLiveInitInfoSetting;

@interface HTSLiveLinkmicInitInfoContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveInitInfoSetting *videoChatInitInfo;
@property (nonatomic) BOOL hasVideoChatInitInfo;
@property (retain, nonatomic) HTSLiveInitInfoSetting *audioChatInitInfo;
@property (nonatomic) BOOL hasAudioChatInitInfo;

+ (id)descriptor;

@end
