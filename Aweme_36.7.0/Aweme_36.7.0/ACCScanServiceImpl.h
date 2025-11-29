@class ACCCameraSubscription, NSString, ACCBlockSequencer, VEImageDetector, IESEffectModel;
@protocol ACCRecordPropService, ACCCameraService;

@interface ACCScanServiceImpl : NSObject <ACCMessageFilterDelegate, ACCScanService>

@property (retain, nonatomic) VEImageDetector *imageDetector;
@property (retain, nonatomic) ACCBlockSequencer *bachPropDownloadSeq;
@property (retain, nonatomic) ACCBlockSequencer *bachPropApplySeq;
@property (retain, nonatomic) IESEffectModel *bachProp;
@property (copy, nonatomic) id /* block */ propScanCompletion;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL bachPropScanIsRunning;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (copy, nonatomic) NSString *scanReferString;

- (void)releaseImageDetector;
- (BOOL)shouldTransferMessage:(id)a0;
- (id)scanByImageDetector:(id)a0;
- (void)prefetchBachPropResource;
- (void)scanByBachProp:(id /* block */)a0;
- (void)cancelBachPropScan;
- (void)downloadBachPropWithCompletion:(id /* block */)a0;
- (BOOL)bachPropIsApplied;
- (void).cxx_destruct;

@end
