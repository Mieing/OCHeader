@class IESEffectModel, NSArray, NSString, UIImage, AWEVideoPublishViewModel, NSMutableArray, ACCExtractAbilityManager;
@protocol ACCRecordFrameSamplingHandlerProtocol;

@interface ACCRecordFrameSamplingServiceImpl : NSObject <ACCRecordFrameSamplingHandlerDelegate, ACCRecordFrameSamplingServiceProtocol>

@property (copy, nonatomic) NSArray<ACCRecordFrameSamplingHandlerProtocol> *handlerChain;
@property (retain, nonatomic) NSMutableArray *completionObservers;
@property (weak, nonatomic) ACCExtractAbilityManager *extractManager;
@property (retain, nonatomic) UIImage *bgPhoto;
@property (copy, nonatomic) NSArray *bgPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, weak, nonatomic) IESEffectModel *currentSticker;
@property (copy, nonatomic) NSArray *multiAssetsPixaloopSelectedImages;
@property (nonatomic) BOOL isExportingAssetImage;
@property (readonly, nonatomic) double timeInterval;

- (id)initWithPublishModel:(id)a0;
- (void)updateCurrentSticker:(id)a0;
- (void)configCameraService:(id)a0;
- (void)configFlowService:(id)a0;
- (void)configPropService:(id)a0;
- (void)startWithCameraService:(id)a0 timeInterval:(double)a1;
- (void)sampleFrame;
- (void)removeAllFrames;
- (void)removeCompletionObserver:(id /* block */)a0;
- (void)removeAllCompletionObservers;
- (void)updatePublishModel:(id)a0;
- (void)updateExtractManager:(id)a0;
- (void)saveBgPhotosForTakePicture;
- (void)samplingCompleted:(id)a0 samplingFrames:(id)a1;
- (void)samplingCompleted:(id)a0 preloadFrames:(id)a1 preloadTimes:(id)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)addCompletionObserver:(id /* block */)a0;

@end
