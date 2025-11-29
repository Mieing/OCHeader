@interface TPStrategyContext : NSObject

@property (nonatomic) long long playerType;
@property (nonatomic) long long errorType;

+ (id)contextWithPlayerType:(long long)a0 errorType:(long long)a1;

@end
