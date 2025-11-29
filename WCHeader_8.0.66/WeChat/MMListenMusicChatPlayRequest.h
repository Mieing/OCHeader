@class NSData, NSString, MMListenMusicChatPlayRequest_GetResultRequest, MMListenMusicChatPlayRequest_ChatRequest, MMListenMusicBaseRequest, BaseRequest, MMListenAudioChatPlayRequest, MMListenMusicChatContext, NSMutableArray, MMListenMusicChatPlayRequest_GetCommonResultRequest;

@interface MMListenMusicChatPlayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int requestType;
@property (retain, nonatomic) MMListenMusicChatPlayRequest_ChatRequest *chatRequest;
@property (retain, nonatomic) MMListenMusicChatPlayRequest_GetResultRequest *getResultRequest;
@property (retain, nonatomic) NSMutableArray *supportedPlayControlTypes;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSString *clientRequestId;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;
@property (retain, nonatomic) MMListenMusicChatPlayRequest_GetCommonResultRequest *getCommonResultRequest;
@property (retain, nonatomic) NSData *conversationSessionBuffer;
@property (nonatomic) BOOL supportStreamingResponse;
@property (retain, nonatomic) MMListenMusicChatContext *context;
@property (retain, nonatomic) MMListenAudioChatPlayRequest *audioChatPlayRequest;

+ (void)initialize;

@end
