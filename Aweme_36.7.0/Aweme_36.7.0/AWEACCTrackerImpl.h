@class NSString;

@interface AWEACCTrackerImpl : NSObject <ACCTrackProtocol, LMImageQualityEventLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)trackLogData:(id)a0;
- (void)trackEvent:(id)a0 label:(id)a1 value:(id)a2 extra:(id)a3 attributes:(id)a4;
- (void)track:(id)a0 params:(id)a1;
- (void)trackEvent:(id)a0 paramsGenerate:(id /* block */)a1;
- (void)trackEvent:(id)a0 params:(id)a1 context:(id)a2;
- (void)trackEvent:(id)a0 params:(id)a1 needStagingFlag:(BOOL)a2;
- (void)trackEvent:(id)a0 params:(id)a1 customInfo:(id)a2;
- (BOOL)p_disableDeprecatedTrackMethods;
- (void)logTrackerEvent:(id)a0 params:(id)a1 label:(id)a2;
- (void)p_doTrack:(id)a0 params:(id)a1;
- (void)p_doTrackEvent:(id)a0 params:(id)a1;
- (void)p_doTrackEvent:(id)a0 params:(id)a1 customInfo:(id)a2;
- (void)hdmTrackEvent:(id)a0 params:(id)a1;
- (void)hdmTrackEvent:(id)a0 params:(id)a1 context:(id)a2;
- (void)trackEvent:(id)a0 params:(id)a1 customInfo:(id)a2 context:(id)a3;
- (void)trackEvent:(id)a0 attributes:(id)a1;
- (id)deviceID;

@end
