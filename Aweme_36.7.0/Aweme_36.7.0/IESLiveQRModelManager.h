@class NSMutableDictionary, NSTimer, IESLiveSexModelAPI, NSString;
@protocol IESLiveClientAIService;

@interface IESLiveQRModelManager : NSObject <IESLiveQRModelService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (nonatomic) BOOL isModelReady;
@property (nonatomic) BOOL isModelRuning;
@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (retain, nonatomic) NSMutableDictionary *redisMap;
@property (retain, nonatomic) IESLiveSexModelAPI *sexModelApi;
@property (nonatomic) long long count;
@property (nonatomic) long long samplingRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)userService;
- (BOOL)checkLiveTypeAvailable:(long long)a0;
- (void)startCaptureVideoImage;
- (void)stopCaptureVideoImage;
- (id)currentAudienceVCRoomModel;
- (void)runQRModelWithPixelBuffer:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (void)uploadQrModelMultiData:(id)a0 qrCodeArray:(id)a1;
- (void)uploadQrModelMultiUri:(id)a0 qrCodeArray:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
