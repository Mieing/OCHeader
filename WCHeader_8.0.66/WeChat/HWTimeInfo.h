@interface HWTimeInfo : WXPBGeneratedMessage

@property (nonatomic) long long durTimeValue;
@property (nonatomic) int durTimeScale;
@property (nonatomic) long long presentTimeValue;
@property (nonatomic) int presentTimeScale;
@property (nonatomic) long long decodeTimeValue;
@property (nonatomic) int decodeTimeScale;

+ (void)initialize;

@end
