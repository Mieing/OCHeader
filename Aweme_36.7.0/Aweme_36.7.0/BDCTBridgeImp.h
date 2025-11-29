@class NSString, BDCTImageManager, BDCTFlow, NSMutableArray;
@protocol BDCTEventDelegate;

@interface BDCTBridgeImp : NSObject <BDCTVideoRecordPreviewViewControllerDelegate>

@property (readonly, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) BDCTImageManager *imageManager;
@property (weak, nonatomic) BDCTFlow *flow;
@property (weak, nonatomic) id<BDCTEventDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appInfo;

- (void)openCNNetAuthWithContext:(id)a0 callback:(id /* block */)a1;
- (BOOL)isRuningLiveCert;
- (void)removeEventSubscribes;
- (void)videoRecordPreviewViewControllerDidTapRerecordVideo:(id)a0;
- (void)videoRecordPreviewViewControllerDidTapUploadVideo:(id)a0 videoPathURL:(id)a1;
- (void)invokeBridgeWithContext:(id)a0 callback:(id /* block */)a1;
- (id)extractMethodNameFromBridgeName:(id)a0;
- (void)getAppInfoWithContext:(id)a0 callback:(id /* block */)a1;
- (void)launchFlowWithContext:(id)a0 callback:(id /* block */)a1;
- (void)openLoginPageWithContext:(id)a0 callback:(id /* block */)a1;
- (void)closePageWithContext:(id)a0 callback:(id /* block */)a1;
- (void)openPageWithContext:(id)a0 callback:(id /* block */)a1;
- (void)setIsRuningLiveCert:(BOOL)a0;
- (void)openLiveCertWithContext:(id)a0 callback:(id /* block */)a1;
- (void)openVideoCertWithContext:(id)a0 callback:(id /* block */)a1;
- (void)doFaceLivenessWithLivenessType:(id)a0 piperParams:(id)a1 callback:(id /* block */)a2;
- (void)takePhotoWithContext:(id)a0 callback:(id /* block */)a1;
- (void)uploadPhotoWithContext:(id)a0 callback:(id /* block */)a1;
- (void)doOCRWithContext:(id)a0 callback:(id /* block */)a1;
- (void)takeOCRPhotoWithContext:(id)a0 callback:(id /* block */)a1;
- (void)manualVerifyWithContext:(id)a0 callback:(id /* block */)a1;
- (void)preManualCheckWithContext:(id)a0 callback:(id /* block */)a1;
- (void)fetchWithContext:(id)a0 callback:(id /* block */)a1;
- (void)doRequestWithContext:(id)a0 callback:(id /* block */)a1;
- (void)uploadWithContext:(id)a0 callback:(id /* block */)a1;
- (void)sendLogWithContext:(id)a0 callback:(id /* block */)a1;
- (void)uploadEventWithContext:(id)a0 callback:(id /* block */)a1;
- (void)webEventWithContext:(id)a0 callback:(id /* block */)a1;
- (void)setCertStatusWithContext:(id)a0 callback:(id /* block */)a1;
- (void)dialogShowWithContext:(id)a0 callback:(id /* block */)a1;
- (void)showLoadingWithContext:(id)a0 callback:(id /* block */)a1;
- (void)hideLoadingWithContext:(id)a0 callback:(id /* block */)a1;
- (void)openAndCloseWithContext:(id)a0 callback:(id /* block */)a1;
- (void)switchLanguageWithContext:(id)a0 callback:(id /* block */)a1;
- (void)openVideoRecordWithContext:(id)a0 callback:(id /* block */)a1;
- (void)addEvtListenerWithContext:(id)a0 callback:(id /* block */)a1;
- (void)removeEvtListenerWithContext:(id)a0 callback:(id /* block */)a1;
- (void)sendEventWithContext:(id)a0 callback:(id /* block */)a1;
- (void)startNFCWithContext:(id)a0 callback:(id /* block */)a1;
- (void)stopNFCWithContext:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFlow:(id)a0;

@end
