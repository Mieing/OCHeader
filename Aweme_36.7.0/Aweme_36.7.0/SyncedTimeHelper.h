@class CADisplayLink;

@interface SyncedTimeHelper : NSObject {
    CADisplayLink *_displayLink;
    double _syncedTimestamp;
}

+ (id)sharedInstance;

- (double)getSyncedTime;
- (void)setSyncedTime:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
