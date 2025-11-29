@class RACDisposable, HTSLiveToolbarItem, IESLiveGiftToolBarItemStore, NSString;

@interface IESLiveGiftToolBarItemFragment : IESLiveRoomComponent <IESLiveGiftToolBarItemRouter, IESLiveToolbarComponentHandler, IESLiveGiftToolBarItemReaction, IESLiveToolBarCoordinaryAnimationAction>

@property (retain, nonatomic) HTSLiveToolbarItem *giftItem;
@property (retain, nonatomic) IESLiveGiftToolBarItemStore *store;
@property (nonatomic) BOOL enableGiftToolbarPreload;
@property (nonatomic) BOOL needRefreshAppearance;
@property (retain, nonatomic) RACDisposable *giftExtraDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentRefresh;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (unsigned long long)animationTriggerState;
- (void)setItemHidden:(BOOL)a0;
- (void)checkIfGiftCycleReleaseMessageContainsPreSelectGiftId:(id)a0;
- (void)loadGiftItemIfNeed;
- (void)bindToolBarController;
- (void)unSubscribeGiftExtraInfo;
- (void)subscribeGiftExtraInfo;
- (void)removeGiftItemCustomIconViewAndResetItemImageIfNeededWith:(id)a0;
- (void)resetGiftItemAppearanceWithWebPImage:(id)a0;
- (void)removeCoordinaryAnimatonItem;
- (void)requireAnimationFromBDXBridge;
- (void).cxx_destruct;
- (void)triggerAnimation;

@end
