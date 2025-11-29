@interface RecommendTimeStrategyItem : WXPBGeneratedMessage

@property (nonatomic) long long startSecond;
@property (nonatomic) long long endSecond;
@property (nonatomic) unsigned int maxPullCount;

+ (void)initialize;

- (void)setMaxPullCount:(unsigned int)a0;
- (unsigned int)maxPullCount;
- (void)setEndSecond:(long long)a0;
- (long long)endSecond;
- (void)setStartSecond:(long long)a0;
- (long long)startSecond;

@end
