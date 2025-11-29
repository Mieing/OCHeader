@class NSString, MMListenAudioGetTTSInfoResponse;

@interface MMListenMusicChatPlayResponse_TTSResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ttsListenId;
@property (retain, nonatomic) MMListenAudioGetTTSInfoResponse *getTtsInfoResp;

+ (void)initialize;

@end
