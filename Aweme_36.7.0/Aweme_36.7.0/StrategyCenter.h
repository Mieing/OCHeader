@interface StrategyCenter : NSObject

@property (class, copy, nonatomic) id /* block */ strategyChangedCallback;

+ (id)fetchStrategyWithName:(id)a0;
+ (void)addStrategyChangedCallBack:(id)a0;

@end
