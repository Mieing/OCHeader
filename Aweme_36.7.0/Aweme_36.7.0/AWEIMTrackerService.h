@class NSString, NSMutableDictionary;

@interface AWEIMTrackerService : NSObject <IESIMTrackerServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *eventTimesDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iesim_getInstallID;
- (void)iesim_trackEvent:(id)a0 params:(id)a1;
- (void)recordTimeForEvent:(id)a0;
- (id)eventTimes;
- (void)trackAccountCheckWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
