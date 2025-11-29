@class NSString;
@protocol IESADLiveToolbarComponentHandler, IESADLiveToolBarCoordinaryAnimationAction;

@interface AWEBDALiveKitService : NSObject <IESLiveToolbarComponentHandler, IESLiveToolBarCoordinaryAnimationAction, IESADLiveKitService>

@property (weak, nonatomic) id<IESADLiveToolbarComponentHandler> toolBarHandler;
@property (weak, nonatomic) id<IESADLiveToolBarCoordinaryAnimationAction> toolBarAnimationAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (id)enterFromAdType;
- (id)attachingDIContext;
- (id)rawAdParams;
- (BOOL)isUnPaiedUserInPayRoom;
- (BOOL)isVSRoom;
- (int)businessLive;
- (id)itemExplicitInfo;
- (BOOL)isSaaS;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)requestToAnimateWithIdentifier:(id)a0;
- (void)forceUpdateToOrientation:(long long)a0;
- (void)addViewElement:(id)a0;
- (id)liveAnimationCenterController;
- (id)liveToolbarCoordinaryAnimationConfig;
- (BOOL)liveToolbarServerCtrl;
- (BOOL)liveRightBottomOpt;
- (BOOL)shouldDisableECommerceComponent;
- (void)willShowCommercialComponentEntrance;
- (void)didShowCommercialComponentEntrance;
- (void)didHideCommercialComponentEntrance;
- (int)commerceLottery;
- (void)registerHandlerWithItemType:(long long)a0 handler:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfItemInRoom:(id)a0;
- (unsigned long long)animationTriggerState;
- (id)createCardItem;
- (void)showRightBottomViewWithItem:(id)a0;
- (void)hideRightBottomViewWithItem:(id)a0;
- (id)iesLiveImageWithName:(id)a0 applyingAlpha:(double)a1;
- (BOOL)isInnerAD;
- (BOOL)liveRoomAuthHidden;
- (id)createToolbarItem;
- (void)reloadToolbar;
- (void)removeMoreToolsItemWithIdentifier:(id)a0;
- (void)addCoordinaryAnimatonItem:(id)a0 identifier:(id)a1;
- (void)removeCoordinaryAnimatonItemByIdentifier:(id)a0;
- (id)extraJsonStrWithItem:(id)a0;
- (BOOL)liveCooperationPartnerXingtuMergeHandleIm;
- (long long)followStatus;
- (id)rootViewController;
- (id)toolbar;
- (id)requestId;
- (void).cxx_destruct;
- (void)insertItem:(id)a0;
- (void)removeItemWithIdentifier:(id)a0;
- (id)animationContainer;
- (void)triggerAnimation;
- (BOOL)isClear;
- (id)roomID;
- (id)ownerUserID;

@end
