@class PHFetchResult, NSMutableDictionary, NSString, MPScreenshotContextInfo;

@interface MPScreenshotMgr : MMUserService <PHPhotoLibraryChangeObserver, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *infoMap;
@property (retain, nonatomic) MPScreenshotContextInfo *pendingContextInfo;
@property (nonatomic) BOOL isPhotoObserverRegistered;
@property (retain, nonatomic) PHFetchResult *screenshotFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)createWebviewControllerWithArticleInfo:(id)a0 visibleViewController:(id)a1;
- (id)contextInfoMapFilePath;
- (void)loadScreenshotInfoMap;
- (void)saveScreenshotInfMap;
- (BOOL)recordScreenshotContextEnable;
- (BOOL)enableForwardScreenshotWithContext;
- (void)updatePhotoLibraryObserverRegisterStatus:(BOOL)a0;
- (void)didTakeScreenshot;
- (BOOL)isMPArticleURL:(id)a0;
- (id)getContextInfoFromController:(id)a0;
- (void)onSaveLongScreenShotOnController:(id)a0 localIdentifiers:(id)a1;
- (void)didTakeScreenshotOnController:(id)a0;
- (void)handleScreenshotAsset:(id)a0 contextInfo:(id)a1;
- (id)getScreenshotContextInfoWithAssetId:(id)a0;
- (void)onTakeLongScreenShotOnController:(id)a0;
- (id)getReportArticleInfoFromController:(id)a0;
- (void)setupFetchResult;
- (void)photoLibraryDidChange:(id)a0;
- (void)getScreenshot:(BOOL)a0 change:(id)a1 contextInfo:(id)a2;
- (void)OnMsgSendSuccess:(id)a0;
- (void).cxx_destruct;

@end
