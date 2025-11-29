@interface AWEPOIDetailNGFrequentControllUtil : NSObject

- (double)timeWithKey:(id)a0;
- (BOOL)hasRecordTimeWithKey:(id)a0;
- (BOOL)isWithinScopeWithKey:(id)a0 scope:(long long)a1;
- (void)removeTimeWithKey:(id)a0;
- (void)recordTimeWithKey:(id)a0;
- (void)recordWithKey:(id)a0 time:(double)a1;
- (BOOL)canShowWithFreqList:(id)a0;
- (void)recordCloseWtihFreqList:(id)a0;
- (void)clearWtihFreqList:(id)a0;

@end
