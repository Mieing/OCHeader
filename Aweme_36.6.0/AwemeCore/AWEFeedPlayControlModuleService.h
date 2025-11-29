@class NSString;

@interface AWEFeedPlayControlModuleService : HTSService <AWEFeedPlayControlModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)speedManagerClass;
- (id)createFastSpeedView;
- (id)getSharedAFDSpeedManager;
- (id)createSpeedManager;
- (Class)pureModeSettingsClass;
- (Class)pureModeStoreUtilClass;
- (Class)pureModePageTrackHelperClass;
- (id)getAFDPinchZoomEventTracker;
- (Class)longPressFastSpeedHelperClass;
- (id)createRoundSpeedButtonWithViewWidth:(double)a0 textFont:(id)a1;
- (id)cancelAwemeMuteView;
- (id)getAFDAudioManager;

@end
