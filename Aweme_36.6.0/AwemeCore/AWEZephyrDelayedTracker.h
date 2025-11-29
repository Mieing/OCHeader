@class NSMutableArray;

@interface AWEZephyrDelayedTracker : NSObject {
    BOOL _trackerServiceReady;
}

@property (retain, nonatomic) NSMutableArray *delayedObjects;

+ (id)sharedTracker;

- (void)onTrackerServiceReady;
- (void)track:(id)a0 param:(id)a1;
- (void)trackDelayedObjects;
- (void).cxx_destruct;
- (id)init;

@end
