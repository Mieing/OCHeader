@interface HunterPrefetchPlugin

+ (void /* unknown type, empty encoding */)initialize;

- (BOOL)shouldActive;
- (void)onHunterProcessEnd:(id)a0;
- (BOOL)enableHunterPrefetch;
- (BOOL)fetchPrefetchConfig;
- (BOOL)triggerHunterPrefetch;

@end
