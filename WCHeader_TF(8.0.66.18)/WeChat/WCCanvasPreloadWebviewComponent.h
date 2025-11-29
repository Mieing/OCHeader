@class NSString, WCAdConfirmHalfScreenAdapter, LocationRetriever, WCAdDetermineHalfScreenView, NSDictionary, NSURLRequest, WCAdWheelPickerLogic, WCCanvasJSLogic, WKWebView;
@protocol YYWebViewInterface;

@interface WCCanvasPreloadWebviewComponent : WCCanvasComponent <YYWebViewDelegate, WCCanvasJSLogicDelegate, MMImageLoaderObserver, LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate, WCAdConfirmHalfScreenAdapterDelegate, WCAdWheelPickerLogicDelegate>

@property (retain, nonatomic) WKWebView<YYWebViewInterface> *webView;
@property (retain, nonatomic) WCCanvasJSLogic *jsLogic;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *callbackID;
@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView;
@property (retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter;
@property (retain, nonatomic) WCAdWheelPickerLogic *wheelPickerLogic;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (id)getPreInjectScriptStr;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (BOOL)onOperateOpenUrlInWebview:(id)a0 callbackID:(id)a1;
- (BOOL)onAdH5FuncDispatched:(id)a0 callbackID:(id)a1;
- (BOOL)dispatchQRScan:(id)a0 callbackID:(id)a1;
- (void)qrScanWithImage:(id)a0 url:(id)a1 directJump:(BOOL)a2;
- (id)getLocalImageData:(id)a0 syncQrImageDownload:(BOOL)a1;
- (id)getCurrentMMUIViewController;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)onImageDownloadFinish:(id)a0 url:(id)a1;
- (BOOL)dispatchUpdateContentHeight:(id)a0 callbackID:(id)a1;
- (void)onUpdateContentHeight:(id)a0;
- (BOOL)getLocation:(id)a0 callbackID:(id)a1;
- (void)tryToRetrieveLocationForGeoType:(id)a0;
- (void)retrieveLocationForGeoType:(id)a0;
- (void)showLocationPermissionViewWithUserInfo:(id)a0;
- (BOOL)jumpToAppStore:(id)a0 callbackID:(id)a1;
- (BOOL)getDeviceInfo:(id)a0 callbackID:(id)a1;
- (BOOL)requestBindPhoneNumberWithParams:(id)a0 callbackID:(id)a1;
- (BOOL)getCanAutoFillDataWithParams:(id)a0 callbackID:(id)a1;
- (BOOL)setCanAutoFillDataWithParams:(id)a0 callbackID:(id)a1;
- (BOOL)checkDomain:(id)a0;
- (id)validAuthDomainArray;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationCallbackTimeOut:(id)a0;
- (void)reportLocationAuthResultWithName:(id)a0 status:(id)a1;
- (void)confirmAdapterClosedWithResult:(long long)a0 extInfo:(id)a1;
- (void)onDetermineViewButtonClickedWithType:(long long)a0 determineInfo:(id)a1;
- (void)onDetermineViewDidClose:(BOOL)a0;
- (void)showGuideAlertForLocationAuthorization;
- (void)onLocationAuthorizationCancelled;
- (void)goToSettingLocationAuthorization;
- (BOOL)showPickerWithParams:(id)a0 callbackID:(id)a1;
- (void)onConfirmButtonClickWithResultInfo:(id)a0;
- (void)onCancelButtonClick;
- (BOOL)openFinderProfile:(id)a0 callbackID:(id)a1;
- (BOOL)finderFollow:(id)a0 callbackID:(id)a1;
- (BOOL)queryFinderFollowState:(id)a0 callbackID:(id)a1;
- (BOOL)controlFloatComponent:(id)a0 callbackID:(id)a1;
- (void)reportControlFloatComponentWithAction:(id)a0 result:(id)a1;
- (BOOL)requestAppointment:(id)a0 callbackID:(id)a1;
- (BOOL)jumpWeApp:(id)a0 callbackID:(id)a1;
- (void).cxx_destruct;

@end
