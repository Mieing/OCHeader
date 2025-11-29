@interface ExposureSilent : WXPBGeneratedMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;

+ (void)initialize;

- (void)setEndTime:(long long)a0;
- (long long)endTime;
- (void)setStartTime:(long long)a0;
- (long long)startTime;

@end
