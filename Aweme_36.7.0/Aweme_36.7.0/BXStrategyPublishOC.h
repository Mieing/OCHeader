@class NSString;

@interface BXStrategyPublishOC : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) long long updateInterval;
@property (copy, nonatomic) id /* block */ strategyCallback;

- (id)initWithParam:(id)a0 defaultValue:(id)a1 updateInterval:(long long)a2 callback:(id /* block */)a3;
- (id)initWithParam:(id)a0 defaultValue:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)update:(id)a0;

@end
