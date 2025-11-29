@class NSMutableArray;

@interface AFDSocialTimeTrackerStack : NSObject

@property (retain, nonatomic) NSMutableArray *trackers;

- (id)pop;
- (id)peek;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;

@end
