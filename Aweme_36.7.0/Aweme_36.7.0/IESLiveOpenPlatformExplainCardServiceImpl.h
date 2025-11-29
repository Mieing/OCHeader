@class NSMutableDictionary, NSString, RACDisposable, IESLiveOpenPlatformExplainCardContainerView, UIView, NSMutableArray, IESLiveRightBottomMutuallyExclusiveItem;
@protocol IESLiveWebPPlayer;

@interface IESLiveOpenPlatformExplainCardServiceImpl : NSObject <IESLiveOpenPlatformExplainCardActions, IESLiveAutoRotateAction, IESLiveOpenPlatformExplainCardService>

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isCardDisplaying;
@property (copy, nonatomic) NSString *displayingCardAppId;
@property (retain, nonatomic) IESLiveOpenPlatformExplainCardContainerView *containerView;
@property (weak, nonatomic) UIView *entranceView;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *webpPlayer;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *timorItem;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSMutableDictionary *closeCardRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)handleOrientationChanged:(long long)a0;
- (void)setupObserver;
- (void)closeExplainCardWithAppId:(id)a0;
- (void)updateEntranceView:(id)a0;
- (void)scheduleCardWithEntry:(id)a0;
- (void)_hideExplainCard;
- (void)_logIWithEvent:(id)a0 params:(id)a1;
- (void)_scheduleReplaceCardWithEntry:(id)a0;
- (void)_scheduleShowCardWithEntry:(id)a0;
- (void)_scheduleHideCardWithEntry:(id)a0;
- (BOOL)_checkStartAnimatingIfNeeded;
- (void)_startNativeAppItemAnimationWithWebPName:(id)a0 completion:(id /* block */)a1;
- (void)removeFlexInteractBanner;
- (void).cxx_destruct;
- (id)_pop;
- (id)init;
- (void)_push:(id)a0;
- (void)dealloc;
- (unsigned long long)_entryCount;

@end
