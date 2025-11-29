@class NSArray, NSString, UIImage, NSObject;
@protocol OS_dispatch_group, AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraBeautyViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraBeautyInterface>

@property (retain, nonatomic) UIImage *beautyIcon;
@property (retain, nonatomic) UIImage *beautyNaviIcon;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isBeautyOn;
@property (nonatomic) BOOL isToolBarCreated;
@property (copy, nonatomic) NSArray *beautyEffects;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *effectDownloadGroup;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (copy, nonatomic) NSString *beautyButtonAccessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)toggleBeautyMode;
- (void)injectService;
- (void)removeBeautyEffect;
- (void)fetchBeautyEffects;
- (void)p_configBeautyButtonAccessiblity;
- (void)refreshBeautyStatus;
- (void)applyBeautyEffect;
- (void)trackSelectBeautify;
- (void)initBeautyStatusWhenHasAuth;
- (void).cxx_destruct;

@end
