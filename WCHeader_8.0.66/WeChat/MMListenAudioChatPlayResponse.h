@class NSString, MMListenAudioChatPlayResponse_PlaylistResult, MMListenAudioChatPlayResponse_TTSResult, MMListenAudioChatPlayResponse_PlayControlResult, NSData;

@interface MMListenAudioChatPlayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *requestKey;
@property (nonatomic) unsigned int resultType;
@property (retain, nonatomic) MMListenAudioChatPlayResponse_TTSResult *ttsResult;
@property (retain, nonatomic) MMListenAudioChatPlayResponse_PlaylistResult *playlistResult;
@property (nonatomic) unsigned int doingWaitTimeMs;
@property (retain, nonatomic) MMListenAudioChatPlayResponse_PlayControlResult *playControlResult;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
