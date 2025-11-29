@class NSMutableArray;

@interface FinderTranscribe_AddVoiceResp : WXPBGeneratedMessage

@property (nonatomic) long long ackOffset;
@property (retain, nonatomic) NSMutableArray *transResult;
@property (nonatomic) long long voiceLenMs;
@property (retain, nonatomic) NSMutableArray *resultAlreadyVoiceIds;
@property (retain, nonatomic) NSMutableArray *utteranceBeginTimes;

+ (void)initialize;

@end
