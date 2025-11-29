@class NSString, WCAdDetermineHalfScreenView, LocationRetriever;

@interface LiteAppJsApiAdGetLocation : LiteAppJsApiAdBase <LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate>

@property (retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView;
@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (nonatomic) long long geoMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)showLocationPermissionView;
- (void)onDetermineViewButtonClickedWithType:(long long)a0 determineInfo:(id)a1;
- (void)onDetermineViewDidClose:(BOOL)a0;
- (void)retrieveLocation;
- (void)notifyRetrieveLocationSuccess:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void).cxx_destruct;

@end
