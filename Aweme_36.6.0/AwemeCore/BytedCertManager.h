@class NSString;
@protocol BytedCertManagerDelegate;

@interface BytedCertManager : NSObject

@property (class, copy, nonatomic) NSString *domain;
@property (class, nonatomic) BOOL isBoe;
@property (class, copy, nonatomic) NSString *language;
@property (class, readonly, copy, nonatomic) NSString *sdkVersion;
@property (class, weak, nonatomic) id<BytedCertManagerDelegate> delegate;

@property (nonatomic) BOOL hasInited;
@property (nonatomic) BOOL useAPIV3;
@property (copy, nonatomic) NSString *latestTicket;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) long long nfcSupport;
@property (nonatomic) BOOL deviceSupportDepthCapture;
@property (copy, nonatomic) id /* block */ uiConfigBlock;
@property (nonatomic) BOOL hasInited;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL isBoe;
@property (nonatomic) BOOL useAPIV3;
@property (nonatomic) long long nfcSupport;
@property (nonatomic) BOOL deviceSupportDepthCapture;
@property (copy, nonatomic) id /* block */ uiConfigBlock;
@property (weak, nonatomic) id<BytedCertManagerDelegate> delegate;

+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 completion:(id /* block */)a4;
+ (id)supportWHCert;
+ (void)p_initAliyunSDK;
+ (id)p_aliyunSDKVersion;
+ (id)p_aliyunMetaInfo;
+ (BOOL)handleWebEventForJSBridgeWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)handleWebEventWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)getModelByPre:(id)a0 pre:(id)a1;
+ (id)getResourceByPath:(id)a0 pre:(id)a1 suffix:(id)a2;
+ (BOOL)checkMd5:(id)a0 md5:(id)a1;
+ (void)metaSecReportForBeforCameraStart;
+ (void)takePhotoByCameraWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)selectImageByAlbumWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)getImageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)doOCRWithImageType:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)ttnetCommonParams;
+ (void)showToastWithText:(id)a0 type:(long long)a1;
+ (void)showAlertOnViewController:(id)a0 title:(id)a1 message:(id)a2 actions:(id)a3;
+ (void)recordVideoWithParameter:(id)a0 fromViewController:(id)a1 completion:(id /* block */)a2;
+ (void)recordVideoWithConfig:(id)a0 fromFlow:(id)a1 completion:(id /* block */)a2;
+ (id)deviceSupportNFC;
+ (void)initSDK;
+ (void)initSDKV3;
+ (void)nfcSupportPreSet;
+ (void)configUI:(id /* block */)a0;
+ (void)beginCertificationWithParameter:(id)a0 completion:(id /* block */)a1;
+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 completion:(id /* block */)a2;
+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 completion:(id /* block */)a3;
+ (void)beginCertificationForResultWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 completion:(id /* block */)a4;
+ (void)beginFaceVerificationWithParameter:(id)a0 shouldBeginFaceVerification:(id /* block */)a1 fromViewController:(id)a2 completion:(id /* block */)a3;
+ (void)beginFaceVerificationWithParameter:(id)a0 shouldBeginFaceVerification:(id /* block */)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 completion:(id /* block */)a4;
+ (void)createFaceVeirfyVCWithParameter:(id)a0 competion:(id /* block */)a1;
+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 shouldBeginFaceVerification:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)beginFaceQualityDetectWithBeautyIntensity:(int)a0 fromViewController:(id)a1 completion:(id /* block */)a2;
+ (void)beginFaceQualityDetectWithBeautyIntensity:(int)a0 backCamera:(BOOL)a1 fromViewController:(id)a2 completion:(id /* block */)a3;
+ (void)beginFaceQualityDetectWithBeautyIntensity:(int)a0 backCamera:(BOOL)a1 faceAngleLimit:(int)a2 fromViewController:(id)a3 completion:(id /* block */)a4;
+ (void)getGrayscaleStrategyWithEnterFrom:(id)a0 completion:(id /* block */)a1;
+ (void)getAuthDecisionWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)getAuthDecisionForJsonObjWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)beginCertificationWithParams:(id)a0 identityParams:(id)a1 faceVerificationOnly:(BOOL)a2 completion:(id /* block */)a3;
+ (void)metaSecReportForOnCameraRunning;
+ (id)appMSManagerML;
+ (id)appName;
+ (void)updateSettings:(id)a0;
+ (id)shareInstance;
+ (id)aid;

- (void)p_beginAuthorizationWithParams:(id)a0;
- (void)beginAuthorizationWithParameter:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithParameter:(id)a0 fromViewController:(id)a1 completion:(id /* block */)a2;
- (void)beginAuthorizationWithParameter:(id)a0 fromViewController:(id)a1 forcePresent:(BOOL)a2 completion:(id /* block */)a3;
- (void)beginAuthorizationWithParameter:(id)a0 fromViewController:(id)a1 forcePresent:(BOOL)a2 superFlow:(id)a3 completion:(id /* block */)a4;
- (void)p_beginFaceVerificationWithParameter:(id)a0 fromViewController:(id)a1 forcePresent:(BOOL)a2 suprtFlow:(id)a3 shouldBeginFaceVerification:(id /* block */)a4 completion:(id /* block */)a5;
- (void)saveStatusBarHeight;
- (void)createFaceVeirfyVCWithParameter:(id)a0 competion:(id /* block */)a1;
- (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 shouldBeginFaceVerification:(id /* block */)a4 completion:(id /* block */)a5;
- (void)beginFaceVerificationWithParameter:(id)a0 fromViewController:(id)a1 forcePresent:(BOOL)a2 shouldBeginFaceVerification:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (id)imageManager;

@end
