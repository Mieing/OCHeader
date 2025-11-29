@class ACCCameraSubscription, NSMutableDictionary, NSString, ACCGroupedPredicate, AWEVideoPublishViewModel;
@protocol ACCEditSpecialEffectServiceProtocol, ACCSideslipPropPanelService, IESServiceProvider, ACCSideslipPropPanelFocusHandleService, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropViewModel : NSObject <ACCSideslipPropService, ACCSideslipPropInternalService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) unsigned long long lastShowState;
@property (nonatomic) unsigned long long showState;
@property (nonatomic) BOOL isShowOrDismissAnimating;
@property (nonatomic) BOOL isFadeHidden;
@property (nonatomic) unsigned long long showPanelStateAction;
@property (nonatomic) BOOL fadeHiddenPanelAction;
@property (retain, nonatomic) ACCGroupedPredicate *fadeHiddenPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *forbidFirstExposurePredicate;
@property (nonatomic) BOOL autoLocate;
@property (nonatomic) long long forceLocateIndex;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusHandleService> sideslipFocusHandleService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (retain, nonatomic) NSMutableDictionary *showStateAnimatedDic;
@property (nonatomic) BOOL isUserTap;
@property (nonatomic) BOOL hasOpenPropPanel;
@property (nonatomic, getter=isEnable) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exposePanelWithEnterMethod:(id)a0 cancelProp:(BOOL)a1 animated:(BOOL)a2;
- (void)showPanelWithEnterMethod:(id)a0 forceLocateIndex:(long long)a1 animated:(BOOL)a2;
- (void)showPanelWithEnterMethod:(id)a0 forceLocateIndex:(long long)a1 animated:(BOOL)a2 isUserTap:(BOOL)a3;
- (void)showPanelWithEnterMethod:(id)a0 autoLocate:(BOOL)a1 animated:(BOOL)a2;
- (void)dismissPanelWithEnterMethod:(id)a0 cancelProp:(BOOL)a1 animated:(BOOL)a2;
- (void)updatePanelFadeShowState;
- (void)handleCancelPickedPropIfNeeded;
- (BOOL)animatedForShowState:(unsigned long long)a0;
- (void)handleBeginAnimationWithShowState:(unsigned long long)a0;
- (void)handleFinishAnimationWithShowState:(unsigned long long)a0;
- (void)p_setAnimated:(BOOL)a0 forShowState:(unsigned long long)a1;
- (void)p_postShowPanelStatusIfNeeded:(unsigned long long)a0 isWill:(BOOL)a1;
- (void)showPanelWithEnterMethod:(id)a0 forceLocateIndex:(long long)a1 autoLocate:(BOOL)a2 animated:(BOOL)a3;
- (void)resetLocateIndex;
- (BOOL)p_animatedForShowState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
