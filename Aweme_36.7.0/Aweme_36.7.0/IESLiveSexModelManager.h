@class NSTimer, NSString, IESLiveSexModelAPI;
@protocol IESLivePerfSampler, IESLiveClientAIService;

@interface IESLiveSexModelManager : NSObject <IESLiveSexModelService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (nonatomic) BOOL isModelReady;
@property (nonatomic) BOOL isModelRuning;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL liveDegrade;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveSexModelAPI *sexModelApi;
@property (nonatomic) long long count;
@property (nonatomic) long long samplingRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)userService;
- (BOOL)isSexModelReady;
- (void)downloadSexModelWithCompletion:(id /* block */)a0;
- (BOOL)checkLiveTypeAvailable:(long long)a0;
- (void)startCaptrueVideoImage;
- (void)stopCaptrueVideoImage;
- (id)currentAudienceVCRoomModel;
- (void)runSexModelWithPixelBuffer:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (void)uploadSexModelMultiData:(id)a0 scoreDic:(id)a1 packageId:(id)a2;
- (void)uploadSexModelData:(id)a0 score:(id)a1 packageId:(id)a2;
- (void)uploadSexModelUri:(id)a0 score:(id)a1 packageId:(id)a2;
- (void)uploadSexModelMultiUri:(id)a0 scoreDic:(id)a1 packageId:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
