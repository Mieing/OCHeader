@class NSString, UIImageView, UIVisualEffectView, UILabel, NSDictionary;
@protocol ACCRecorderViewContainer, ACCCameraService;

@interface ACCAIEmojiFaceDetectComponent : ACCFeatureComponent <ACCAlgorithmEvent>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UIImageView *faceImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIVisualEffectView *recorderBlur;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL isFirstAppear;
@property (copy, nonatomic) NSDictionary *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)onExternalAlgorithmCallback:(id)a0 type:(unsigned long long)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)imModel;
- (void)bindServices:(id)a0;
- (void)p_bindViewModelObserver;
- (long long)p_faceDetectStatusWithResult:(id)a0;
- (void)p_updateUIWithStatus:(long long)a0;
- (id)p_getTipTextWithStatus:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
