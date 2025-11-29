@class NSString, MMListenAudioGetTTSInfoResponse;

@interface MMListenAudioChatPlayResponse_TTSResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ttsListenId;
@property (retain, nonatomic) MMListenAudioGetTTSInfoResponse *getTtsInfoResp;

+ (void)initialize;

@end
