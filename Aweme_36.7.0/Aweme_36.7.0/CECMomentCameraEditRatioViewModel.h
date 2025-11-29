@class NSString, UIImage;
@protocol CECMomentCameraFlowService;

@interface CECMomentCameraEditRatioViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraEditRatioInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double alpha;
@property (nonatomic) unsigned long long editRatio;
@property (nonatomic) BOOL animateChanges;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)injectService;
- (id)initWithViewModelFactory:(id)a0;
- (void)updateEditRatio;
- (void).cxx_destruct;
- (void)buttonTapped;

@end
