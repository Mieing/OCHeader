@class NSMutableSet;

@interface AWEMVInFlowDisplayTracker : NSObject

@property (retain, nonatomic) NSMutableSet *trackedItemIds;

- (void)trackDisplay:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
