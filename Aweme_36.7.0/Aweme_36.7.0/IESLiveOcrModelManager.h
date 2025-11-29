@class NSTimer, IESLiveOcrModelAPI, NSString;
@protocol IESLivePerfSampler, IESLiveClientAIService;

@interface IESLiveOcrModelManager : NSObject <IESLiveOcrModelService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (nonatomic) BOOL isModelReady;
@property (nonatomic) BOOL isModelRuning;
@property (nonatomic) BOOL liveDegrade;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveOcrModelAPI *ocrModelApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)userService;
- (void)startCaptrueVideoImage;
- (void)stopCaptrueVideoImage;
- (BOOL)isOcrModelReady;
- (void)downloadOcrModelWithCompletion:(id /* block */)a0;
- (void)uploadOcrModelData:(id)a0;
- (id)currentAudienceVCRoomModel;
- (void)runOcrModelWithPixelBuffer:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
