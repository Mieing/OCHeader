@class TIMXPBNGetCSBRecentMessageRespBody;

@interface TIMXPBNGetCSBUserMessageResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNGetCSBRecentMessageRespBody *messages;
@property (nonatomic) BOOL hasMessages;

+ (id)descriptor;

- (id)messages;

@end
