@class MMListenMusicChatPlayResponse_TTSResult, NSString, MMListenMusicChatPlayResponse_PlayControlResult, NSData, MMListenMusicChatPlayResponse_TextResult, BaseResponse, MMListenMusicChatPlayResponse_PlaylistResult, MMListenAudioChatPlayResponse;

@interface MMListenMusicChatPlayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *requestKey;
@property (nonatomic) unsigned int resultType;
@property (nonatomic) unsigned int doingWaitTimeS;
@property (retain, nonatomic) MMListenMusicChatPlayResponse_TTSResult *ttsResult;
@property (retain, nonatomic) MMListenMusicChatPlayResponse_PlaylistResult *playlistResult;
@property (nonatomic) unsigned int doingWaitTimeMs;
@property (retain, nonatomic) MMListenMusicChatPlayResponse_PlayControlResult *playControlResult;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int waitTimeMs;
@property (nonatomic) BOOL isFinish;
@property (retain, nonatomic) NSData *conversationSessionBuffer;
@property (nonatomic) int responseType;
@property (retain, nonatomic) NSString *recommendPayload;
@property (retain, nonatomic) MMListenMusicChatPlayResponse_TextResult *textResult;
@property (retain, nonatomic) MMListenAudioChatPlayResponse *audioChatPlayResp;

+ (void)initialize;

@end
