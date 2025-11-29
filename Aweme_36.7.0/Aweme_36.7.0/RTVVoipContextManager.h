@class NSString, RxMultipleDelegate, RTVVoipManager, RTVVoipViewsController;
@protocol RTVVoipObserver, RTVVoipConfigureManagerInterface, RxInjector, RTVInteractionConfigureManagerInterface, RTVSettingsManager;

@interface RTVVoipContextManager : NSObject <__RTVVoipContextManagerPrivateInterface, RTVVoipContextManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipObserver> *multipleDelegate;
@property (readonly, nonatomic) RTVVoipManager *voipManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingsManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigMananger;
@property (readonly, weak, nonatomic) RTVVoipViewsController *viewsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)isOnTheCall;
- (BOOL)isUserInVoip:(id)a0;
- (BOOL)isVoipFeedShareCaller;
- (BOOL)isFeedSharing;
- (BOOL)shouldDisplayIMPushOfSender:(id)a0 convID:(id)a1;
- (BOOL)voipViewIsNarrowVisible;
- (BOOL)isSwitchLayoutAnimating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentNarrowViewFrame;
- (BOOL)isInVoip;
- (BOOL)inPrepareOrRecall;
- (BOOL)isCurrentVoipCallingOrRinging;
- (BOOL)inSystemCall;
- (BOOL)isInRingForCallee;
- (id)feedshareChatConversationID;
- (BOOL)voipVCIsVisible;
- (long long)currentVoipType;
- (id)currentVoipRoomID;
- (long long)currentVoipStatus;
- (id)inVoipTipDescription;
- (void)addVoipObserver:(id)a0;
- (void)removeVoipObserver:(id)a0;
- (void)stashVoip:(id)a0;
- (id)currentActiveVoip;
- (void)voipViewControllerWillPresent:(id)a0;
- (void)voipViewControllerDidPresent:(id)a0;
- (void)voipWillBegin:(id)a0;
- (void)voipDidBegin:(id)a0;
- (void)voipDidDismiss:(id)a0;
- (void)voipWillFinish:(id)a0;
- (void)voipDidFinish:(id)a0;
- (void)voip:(id)a0 willSwitchToNarrow:(BOOL)a1;
- (void)voip:(id)a0 didSwitchToNarrow:(BOOL)a1;
- (void)voip:(id)a0 typeDidChangeTo:(long long)a1 fromType:(long long)a2;
- (void)voip:(id)a0 didPerformAction:(id)a1;
- (void)didReceiveVoip:(id)a0;
- (void)voipDidOccupied:(id)a0;
- (void)requireAutoAccept:(id)a0;
- (void)__log:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInCall;

@end
