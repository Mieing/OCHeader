@interface CdnTicker : NSObject

@property (nonatomic) long long tickCount;
@property (nonatomic) long long tickInteval;
@property (copy, nonatomic) id /* block */ block;

+ (id)tickerWithInterval:(long long)a0 block:(id /* block */)a1;

- (void)tick;
- (void)clearTick;
- (void).cxx_destruct;

@end
