@class TIMXPBNGetCSBRecentMessageRespBody;

@interface TIMXPBNMarkCSBConversationReadResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNGetCSBRecentMessageRespBody *messages;
@property (nonatomic) BOOL hasMessages;

+ (id)descriptor;

@end
