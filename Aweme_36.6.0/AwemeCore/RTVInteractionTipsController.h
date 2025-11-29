@class NSString, RTVInteractionTipsShowingRequest, UIView;
@protocol RTVInteractionTipsControllerDelegate, RTVInteractionTipsControllerObserver, RTVMultipleDelegateInterface, RTVXRControllerInjector, RTVBubbleGenerator, RTVStorageArea;

@interface RTVInteractionTipsController : NSObject <RTVInteractionTipsController>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) RTVInteractionTipsShowingRequest *currentShowingRequest;
@property (readonly, nonatomic) id<RTVBubbleGenerator> bubbleGenerator;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVInteractionTipsControllerObserver> multipleObserver;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) id<RTVStorageArea> storageArea;
@property (weak, nonatomic) id<RTVInteractionTipsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)notifyChangeActive:(BOOL)a0;
- (BOOL)showInviteFriendTip:(id)a0 forView:(id)a1;
- (BOOL)dismissInviteFriendTipForView:(id)a0;
- (BOOL)showControlMoreButtonTip:(id)a0 forView:(id)a1 direction:(unsigned long long)a2;
- (BOOL)dismissControlMoreButtonTip;
- (void)dismissCurrentDisplayingTip;
- (void)showQuickBackToFeedTipIfNeededForView:(id)a0;
- (BOOL)showTipWithRequest:(id)a0;
- (BOOL)dismissTipWithRequest:(id)a0;
- (void)__dismissTipIfNeededWithAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
