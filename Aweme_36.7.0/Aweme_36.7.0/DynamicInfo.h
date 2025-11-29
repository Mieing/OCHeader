@class HTSLiveText;

@interface DynamicInfo : IESLivePBBaseMessage

@property (nonatomic) long long showAfterTimeMs;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) long long durationMs;

+ (id)descriptor;

@end
