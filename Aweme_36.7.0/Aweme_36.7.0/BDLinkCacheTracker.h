@interface BDLinkCacheTracker : NSObject

@property (nonatomic) unsigned long long port3530;
@property (nonatomic) unsigned long long port4530;
@property (nonatomic) unsigned long long port15550;

- (unsigned long long)overallTrackerStatus;
- (void)setStatus:(BOOL)a0 withPort:(int)a1;
- (id)init;

@end
