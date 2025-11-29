@interface AWEConcernFrequencyControlManager : NSObject

+ (id)sharedInstance;

- (BOOL)canShowForForeverStrategyWithKey:(id)a0 maxShowTime:(int)a1;
- (void)recordShowForForeverStrategyWithKey:(id)a0;
- (void)recordActionForForeverStrategyWithKey:(id)a0;
- (id /* block */)configWithKey;
- (BOOL)canShow:(id)a0;
- (void)recordShow:(id)a0;
- (void)recordAction:(id)a0;

@end
