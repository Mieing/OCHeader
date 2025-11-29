@class NSString, NSMutableDictionary, NSDictionary, DTFCameraService, DTFChameleonUtilsModel;

@interface ChameleonUtils : NSObject <DTFCameraServiceDelegate>

@property (copy, nonatomic) NSString *whiteBalanceKey;
@property (copy, nonatomic) NSString *zoomKey;
@property (copy, nonatomic) NSString *errorCode;
@property (retain, nonatomic) DTFCameraService *cameraService;
@property (nonatomic) int frameNumber;
@property (retain, nonatomic) NSMutableDictionary *whiteBalanceImageDict;
@property (copy, nonatomic) NSString *zimId;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL isChameleon;
@property (retain, nonatomic) NSDictionary *chameleonDict;
@property (retain, nonatomic) NSDictionary *videoZoomDict;
@property (retain, nonatomic) DTFChameleonUtilsModel *model;
@property (nonatomic) int maxMissCount;
@property (nonatomic) float chameleonUploadCompressRate;
@property (copy, nonatomic) NSString *chameleonFileNamePrefix;
@property (nonatomic) BOOL isProcessed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraControllerCaptureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)initWithCameraService:(id)a0 bisConfig:(id)a1 callback:(id /* block */)a2 zimId:(id)a3;
- (id)randomWithDict:(id)a0;
- (void)callbackWhiteBalance;
- (void)checkErrorCode:(id)a0;
- (void).cxx_destruct;

@end
