@class NSString, NSMutableSet;

@interface AFDStory25ColorRingTrackerManager : NSObject <AFDStory25ColorRingTrackerManagerProtocol>

@property (retain, nonatomic) NSMutableSet *hasTrackedSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackStory25ColorRingClickWithConfig:(id)a0 extraParams:(id)a1;
+ (void)trackStory25ColorRingShowWithConfig:(id)a0 extraParams:(id)a1;
+ (void)trackStory25ColorRingActualShowMonitorWithConfig:(id)a0;
+ (void)trackStory25ColorRingDataAvailableMonitorWithConfig:(id)a0;

- (void).cxx_destruct;

@end
