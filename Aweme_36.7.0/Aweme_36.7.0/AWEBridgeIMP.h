@class NSString;

@interface AWEBridgeIMP : NSObject <AWEPhotosPreviewViewControllerDelegate, AWEBridgeImpProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPerformanceMonitorForPageNamed:(id)a0;
+ (void)openPOIFeedWithParams:(id)a0;
+ (void)uploadPhotosWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadMediaWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadBusinessLicenseWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)downloadWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)monitorScreenshotWithParams:(id)a0;
+ (id)trackURL:(id)a0;
+ (id)findWebViewController:(id)a0;
+ (void)broadcastWithParams:(id)a0;
+ (void)openBrowserWithParams:(id)a0 callback:(id /* block */)a1 cert:(id)a2;
+ (void)openSchemaWithParams:(id)a0 callback:(id /* block */)a1;
+ (BOOL)openSchemaWithParams:(id)a0;
+ (BOOL)galleryWithParams:(id)a0;
+ (void)asyncOpenWebURLOrOpenURL:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)sendLynxAdTrackURLWithParams:(id)a0;
+ (void)asyncOpenAppStoreWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)openAppStoreWithParams:(id)a0;
+ (id)sendAdLog:(id)a0 model:(id)a1;
+ (id)sendAdLog:(id)a0;
+ (id)sendLogV3:(id)a0;
+ (void)showToastWithParams:(id)a0;
+ (Class)aAWEMainModuleServiceDOUYINDSAdapterClass;
+ (id /* block */)prepareShareCompletionWithBridgeCallback:(id /* block */)a0;
+ (id)shareModelWithActivitySDKModel:(id)a0;
+ (void)shareWithParams:(id)a0 asyncCallback:(id /* block */)a1;
+ (void)shareAwemeWithParams:(id)a0 asyncCallback:(id /* block */)a1;
+ (void)shareActivityWithParams:(id)a0 asyncCallback:(id /* block */)a1;
+ (void)popWithParams:(id)a0;
+ (void)setupAppSkin:(id)a0;
+ (id)createJumpSourceBtmTokenWithParam:(id)a0;
+ (id)generateSchema:(id)a0;
+ (BOOL)closeReactPageWithParams:(id)a0;
+ (id)callbackBlockDict;
+ (void)p_requestLeaveSmartPhoneNumberWithRequestParams:(id)a0 contentParams:(id)a1 toUid:(id)a2;
+ (void)lynxBridgeCallEventWithParams:(id)a0;
+ (void)miniAppCallEventWithParams:(id)a0;
+ (id)sendLogV1:(id)a0;
+ (void)pickerAndUploadPhotoWithParams:(id)a0 asyncCallback:(id /* block */)a1;
+ (BOOL)makeSmartCallWithParams:(id)a0;
+ (BOOL)setDarkModeWithParams:(id)a0 bridgeType:(long long)a1 jsBridge:(id)a2 completion:(id /* block */)a3;
+ (void)jsSetTitle:(id)a0 jsBridge:(id)a1;
+ (id)scanWithParams:(id)a0;
+ (void)pushSchemeWithParams:(id)a0 callback:(id /* block */)a1;
+ (void)handlePerformanceMonitorWithParams:(id)a0;
+ (void)handleYapilAhtuaWithParams:(id)a0 completionBlock:(id /* block */)a1;
+ (void)handleCopyWithParams:(id)a0 withContextInfo:(id)a1;
+ (void)leavePhoneNumberWithParams:(id)a0 completion:(id /* block */)a1;
+ (BOOL)uniAppInstalledWithParams:(id)a0;
+ (void)showAlertViewWithTitle:(id)a0 content:(id)a1 actionTitle:(id)a2 cancelTitle:(id)a3 action:(id /* block */)a4 cancel:(id /* block */)a5;
+ (void)openChatRoomWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)previewPictureWithParams:(id)a0;
+ (BOOL)preloadIronManWithParams:(id)a0;
+ (void)showFeelGoodPanelWithParams:(id)a0;
+ (void)downloadMediaWithParams:(id)a0 withContextInfo:(id)a1 compation:(id /* block */)a2;
+ (void)operateCalendarWithParams:(id)a0 withContextInfo:(id)a1 completion:(id /* block */)a2;
+ (id)createBtmReportParamsWithParams:(id)a0 host:(id)a1;
+ (void)initialize;
+ (id)userInfo;
+ (id)appInfo;
+ (id)shareInstance;
+ (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)a0;
- (id)aAWEMainModuleServiceDOUYINDSAdapter;

@end
