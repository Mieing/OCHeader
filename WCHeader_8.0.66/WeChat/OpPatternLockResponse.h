@class PatternLockBuffer, BaseResponse;

@interface OpPatternLockResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PatternLockBuffer *patternlockbuf;

+ (void)initialize;

@end
