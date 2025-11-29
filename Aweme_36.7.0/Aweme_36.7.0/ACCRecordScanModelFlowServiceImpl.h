@class ACCCameraSubscription, NSString, AWEVideoPublishViewModel;
@protocol ACCRecordScanModeParamFactory, ACCCameraService;

@interface ACCRecordScanModelFlowServiceImpl : NSObject <ACCRecordScanModelFlowService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) BOOL pauseScanAlgorithm;
@property (retain, nonatomic) id<ACCRecordScanModeParamFactory> paramFactory;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getImageDefnition;

- (id)syncGetSearchScanSampleImageGuide;
- (void)scanQRCodeEnable:(BOOL)a0;
- (void)shakeDetectEnable:(BOOL)a0;
- (void)openScanAlgorithm;
- (void)closeScanAlgorithm;
- (void)handleSampleDismiss:(id)a0;
- (void)enableScanMode:(BOOL)a0;
- (void)qrcodeDetectEnable:(BOOL)a0;
- (void)otherDetectEnable:(BOOL)a0;
- (void)scanDetectEnable:(BOOL)a0;
- (void)enterScanMode;
- (void)exitScanMode;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
