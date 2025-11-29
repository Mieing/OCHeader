@class NSString, SKBuiltinBuffer_t;

@interface VoiceTransRes : WXPBGeneratedMessage

@property (nonatomic) unsigned int sequence;
@property (nonatomic) unsigned int endFlag;
@property (retain, nonatomic) NSString *result;
@property (retain, nonatomic) SKBuiltinBuffer_t *timeSlice;

+ (void)initialize;

@end
