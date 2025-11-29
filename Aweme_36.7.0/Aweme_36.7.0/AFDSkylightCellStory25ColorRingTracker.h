@class NSMutableSet;

@interface AFDSkylightCellStory25ColorRingTracker : NSObject

@property (retain, nonatomic) NSMutableSet *hasTrackedSet;

+ (id)sharedTracker;

- (BOOL)hasTrackedForUID:(id)a0;
- (void)setHasTrackedForUID:(id)a0;
- (BOOL)hasTrackedMonitorEventForUID:(id)a0 type:(id)a1;
- (void)setHasTrackedMonitorEventForUID:(id)a0 type:(id)a1;
- (void)removeTrackedHistoryIfNeeded;
- (void)removeTrackedHistoryForType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
