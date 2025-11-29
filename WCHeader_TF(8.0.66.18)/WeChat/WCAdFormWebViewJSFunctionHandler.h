@class NSString, WCAdConfirmHalfScreenAdapter, WCAdDynamicCanvasPageInfo, LocationRetriever, WCAdDetermineHalfScreenView, NSDictionary, WCAdWheelPickerLogic, WKWebView;
@protocol WCAdFormWebViewJSFunctionHandlerDelegate, YYWebViewInterface;

@interface WCAdFormWebViewJSFunctionHandler : NSObject <LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate, WCAdConfirmHalfScreenAdapterDelegate, WCAdWheelPickerLogicDelegate>

@property (weak, nonatomic) WKWebView<YYWebViewInterface> *webView;
@property (retain, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSString *qrExtInfo;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *callbackID;
@property (retain, nonatomic) LocationRetriever *locationRetriever;
@property (retain, nonatomic) WCAdDetermineHalfScreenView *determineHalfScreenView;
@property (retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter;
@property (retain, nonatomic) WCAdWheelPickerLogic *wheelPickerLogic;
@property (weak, nonatomic) id<WCAdFormWebViewJSFunctionHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0 pageInfo:(id)a1 componentId:(id)a2 qrExtInfo:(id)a3;
- (BOOL)dispatchFunction:(id)a0 callbackID:(id)a1;
- (void)sendCallback:(id)a0 ret:(int)a1 error:(id)a2 data:(id)a3;
- (BOOL)dispatchQRScan:(id)a0 callbackID:(id)a1;
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
- (BOOL)performAction:(id)a0 callbackID:(id)a1;
- (void).cxx_destruct;

@end
