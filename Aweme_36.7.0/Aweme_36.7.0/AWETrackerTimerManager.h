@class NSMutableDictionary;

@interface AWETrackerTimerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *timerDict;

+ (void)setTimerForIdentifier:(id)a0 withTimer:(id)a1;
+ (void)invalidateTimerForIdentifier:(id)a0;
+ (BOOL)hasTimerForIdentifier:(id)a0;
+ (id)sharedInstance;

- (void)setTimerForIdentifier:(id)a0 withTimer:(id)a1;
- (void)invalidateTimerForIdentifier:(id)a0;
- (BOOL)hasTimerForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
