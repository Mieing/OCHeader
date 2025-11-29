@class NSString;

@interface AWEUITrackerModuleService : HTSService <AWEUITrackerModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)track:(id)a0 event:(id)a1 params:(id)a2;
- (id)appDelegateTrackManager;

@end
