@class NSArray, NSString;
@protocol IESLiveVideoEffectProcessing, IESLiveEffectProcessLifyCycle, IESLiveEffectProcessService, IESLiveRecoderFactory, IESLiveEffectModuleBeautyForAudienceService, IESLiveRecoder;

@interface HTSLiveSmallCameraPreviewView : UIView <HTSLiveCameraEffectProvider>

@property (retain, nonatomic) id<IESLiveRecoderFactory> recoderFactory;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifeCycle;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoProcesser;
@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcesser;
@property (retain, nonatomic) id<IESLiveEffectModuleBeautyForAudienceService> beautyEffectConfig;
@property (copy, nonatomic) NSArray *beautyItems;
@property (nonatomic) BOOL isUsedBeautyEffect;
@property (retain, nonatomic) id<IESLiveRecoder> camera;
@property (readonly, nonatomic) BOOL inPreviewMode;
@property (nonatomic) BOOL openGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)switchCameraSource;
- (void)setUpEffectEnvironment;
- (void)loadCamera;
- (void)useBeautyEffectWithBeautyItems:(id)a0;
- (void)loadBeautyResource;
- (BOOL)isFirstConnect;
- (id)cameraPreview;
- (long long)cameraPosition;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startPreview;
- (void)stopPreview;
- (void)clearCamera;

@end
