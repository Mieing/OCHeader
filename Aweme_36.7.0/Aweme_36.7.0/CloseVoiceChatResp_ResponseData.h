@class VoiceChatStartButton;

@interface CloseVoiceChatResp_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) VoiceChatStartButton *startButton;
@property (nonatomic) BOOL hasStartButton;

+ (id)descriptor;

@end
