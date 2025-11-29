@interface MMLiveBasicQueue : MMLiveQueue

- (unsigned long long)defaultEvictionBehavior;
- (void)enqueueEx:(id)a0 tieBreakingBehavior:(unsigned long long)a1;
- (void)reprioritizeAll;

@end
