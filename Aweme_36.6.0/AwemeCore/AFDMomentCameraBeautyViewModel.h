@class NSArray, NSString, UIImage, NSObject;
@protocol OS_dispatch_group, AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraBeautyViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraFlowServiceSubscriber>

@property (retain, nonatomic) UIImage *beautyIcon;
@property (retain, nonatomic) UIImage *beautyNaviIcon;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double buttonAlpha;
@property (nonatomic) BOOL isBeautyOn;
@property (copy, nonatomic) NSArray *beautyEffects;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *effectDownloadGroup;
@property (retain, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)toggleBeautyMode;
- (void)removeBeautyEffect;
- (void)fetchBeautyEffects;
- (void)applyBeautyEffect;
- (void)trackSelectBeautify;
- (void)initBeautyStatusWhenHasAuth;
- (void).cxx_destruct;

@end
