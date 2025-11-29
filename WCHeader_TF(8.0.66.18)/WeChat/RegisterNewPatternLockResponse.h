@class PatternLockBuffer, BaseResponse;

@interface RegisterNewPatternLockResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PatternLockBuffer *patternlockbuf;

+ (void)initialize;

@end
