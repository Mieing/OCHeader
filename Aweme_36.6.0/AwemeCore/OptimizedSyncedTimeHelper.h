@class CADisplayLink;

@interface OptimizedSyncedTimeHelper : NSObject {
    CADisplayLink *_displayLink;
    double _syncedTimestamp;
}

+ (id)sharedInstance;

- (double)getSyncedTime;
- (void)clearSyncedTime:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
