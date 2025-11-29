@class NSString;

@interface MMListenMusicAsrSessionBuffer : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *asrListenId;
@property (nonatomic) int lastSeq;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
