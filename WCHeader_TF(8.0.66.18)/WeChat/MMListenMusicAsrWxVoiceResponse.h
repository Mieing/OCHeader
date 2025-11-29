@class NSMutableArray;

@interface MMListenMusicAsrWxVoiceResponse : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) int ackReq;
@property (nonatomic) BOOL hasVadSpeak;
@property (nonatomic) float utteranceBeginTime;
@property (nonatomic) BOOL isFinal;
@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) int ackSeq;

+ (void)initialize;

@end
