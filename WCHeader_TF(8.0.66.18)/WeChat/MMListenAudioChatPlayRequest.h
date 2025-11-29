@class NSData, MMListenAudioChatPlayRequest_ChatRequest, MMListenAudioChatPlayRequest_GetResultRequest;

@interface MMListenAudioChatPlayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenAudioChatPlayRequest_ChatRequest *audioChatRequest;
@property (retain, nonatomic) MMListenAudioChatPlayRequest_GetResultRequest *audioGetResultRequest;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
