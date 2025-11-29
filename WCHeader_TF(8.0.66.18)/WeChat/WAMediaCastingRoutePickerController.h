@class WAMediaCastingRoutePickerViewModel, WAMediaCastingUpnpService, WAMediaCastingAirPlayService, WAMediaCastingDataReporter, NSString;
@protocol WAMediaCastingRoutePickerControllerDataSource, WAMediaCastingRoutePickerControllerDelegate;

@interface WAMediaCastingRoutePickerController : NSObject <WAMediaCastingUpnpServiceDelegate, WAMediaCastingRoutePickerViewDelegate, WAMediaCastingAirPlayServiceDelegate, WAMediaCastingPageSheetDelegate>

@property (retain, nonatomic) WAMediaCastingUpnpService *upnpService;
@property (retain, nonatomic) WAMediaCastingAirPlayService *airPlayService;
@property (retain, nonatomic) WAMediaCastingRoutePickerViewModel *viewModel;
@property (retain, nonatomic) WAMediaCastingDataReporter *reporter;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) double startPosition;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long routePickerViewEnterScene;
@property (readonly, nonatomic) BOOL isAirPlaying;
@property (readonly, nonatomic) unsigned long long wirelessType;
@property (readonly, nonatomic) unsigned long long upnpVideoPlayerState;
@property (readonly, nonatomic) BOOL isDLNACasting;
@property (weak, nonatomic) id<WAMediaCastingRoutePickerControllerDataSource> dataSource;
@property (weak, nonatomic) id<WAMediaCastingRoutePickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 pagePath:(id)a1 appServiceType:(unsigned int)a2 component:(unsigned int)a3;
- (void)startCasting:(id)a0 startPosition:(double)a1 isLive:(BOOL)a2;
- (void)switchCasting;
- (void)reconnectCasting;
- (void)exitCasting;
- (void)continueCasting:(id)a0 startPosition:(double)a1 isLive:(BOOL)a2;
- (void)upnp_play;
- (void)upnp_pause;
- (void)upnp_setVolume:(double)a0;
- (void)upnp_seek:(double)a0;
- (void)upnp_videoAppear;
- (void)upnp_videoDisappear;
- (void)reportClickWithEventType:(unsigned long long)a0;
- (void)handlePageSheetDismissDataReport;
- (void)handleUserSelectedAirPlayDeviceDataReport;
- (void)reportCastingEventType:(unsigned long long)a0 success:(BOOL)a1;
- (void)reportCastingEventType:(unsigned long long)a0 uri:(id)a1 success:(BOOL)a2;
- (unsigned long long)protocolTypeForDataReport;
- (unsigned long long)currentVideoModeState;
- (void)onMediaCastingPageSheetWillDismiss:(id)a0;
- (void)onMediaCastingPageSheetDidDismiss:(id)a0;
- (BOOL)isVideoPlayerInFullScreenModeWithPageSheet:(id)a0;
- (void)didSelectDeviceItem:(id)a0 pickerView:(id)a1;
- (void)didSelectGuideButtonPickerView:(id)a0;
- (void)onMediaCastingUpnpServiceDidStartSearch:(id)a0;
- (void)onMediaCastingUpnpServiceDidFinishSearch:(id)a0 devicesList:(id)a1;
- (void)onMediaCastingUpnpService:(id)a0 devicesListDidUpdate:(id)a1;
- (void)onMediaCastingUpnpService:(id)a0 videoPlayerStateDidChange:(unsigned long long)a1;
- (void)onMediaCastingUpnpService:(id)a0 positionInfoDidChange:(double)a1 duration:(double)a2;
- (void)onMediaCastingAirPlayService:(id)a0 wirelessRouteActiveDidChange:(BOOL)a1;
- (void)showRoutePickerViewWithEnterScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
