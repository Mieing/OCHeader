@class NSString, SKBuiltinBuffer_t, NSMutableArray;

@interface VoiceTransCell : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *text;
@property (retain, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int sequence;
@property (nonatomic) int keywordTimeCount;
@property (retain, nonatomic) NSMutableArray *keywordTimeList;

+ (void)initialize;

@end
