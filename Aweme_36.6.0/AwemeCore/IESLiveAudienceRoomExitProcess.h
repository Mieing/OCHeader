@class IESLiveAudienceContainerContext, NSString, IESLiveRoomPopMananger, UIViewController;
@protocol HTSLiveAudienceActions, IESLiveAudienceRoomExitDelegate, IESLiveAudienceRoomAwareness, IESLiveRoomService;

@interface IESLiveAudienceRoomExitProcess : NSObject <IESLiveCloseAction>

@property (weak, nonatomic) UIViewController<IESLiveAudienceRoomExitDelegate> *delegate;
@property (retain, nonatomic) id<HTSLiveAudienceActions> audienceActionCreator;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (retain, nonatomic) IESLiveRoomPopMananger *popManager;
@property (retain, nonatomic) IESLiveAudienceContainerContext *containerContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL didExecuteCloseHandler;
@property (nonatomic) BOOL closeActionEnable;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL preReusePlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)fullScreenPopShouldComplete:(id)a0 originalComplete:(BOOL)a1;

- (void)didSetAttachingDIContext;
- (BOOL)forceCloseCurrentRoom;
- (void)clickCloseButton:(id)a0;
- (void)prepareForReuse:(unsigned long long)a0 callTrace:(id)a1;
- (void)clickCloseButton:(id)a0 trace:(id)a1 completion:(id /* block */)a2;
- (void)forceCloseRoomByMSeq;
- (void)addBackGesture;
- (BOOL)enableStoreVC;
- (id)initWithContainerContext:(id)a0 delegate:(id)a1;
- (BOOL)processExitRoomWithContext:(id)a0;
- (BOOL)willExitRoomWithContext:(id)a0;
- (void)fireExitRoomEndNodeTask;
- (void)liveReusedRoomWithContext:(id)a0;
- (void)liveDidCloseRoomWithContext:(id)a0;
- (void)liveFinishedWithContext:(id)a0;
- (BOOL)dealCloseActionsForExit:(id)a0;
- (BOOL)canPopForExit;
- (void)showFinishViewControllerWithParams:(id)a0;
- (void)closeAllRoomWithAllowSmoothLeave:(BOOL)a0 allowPostLiveDidCloseService:(BOOL)a1 preferOptions:(id)a2 callTrace:(id)a3;
- (void)closeAllRoomInDealloc:(BOOL)a0 preferOptions:(id)a1;
- (void)prepareForClose:(unsigned long long)a0 reuseFlag:(BOOL)a1;
- (id)generateCloseAllRoomPreferenceOptionsWithParams:(id)a0;
- (void)fireExitRoomStartNodeTask;
- (void)exitEndClearRoomInfo;
- (BOOL)askForClose;
- (BOOL)canAddBackGesture;
- (void)enableFullScreenPop;
- (void)disableFullScreenPop;
- (BOOL)fullScreenPopShouldStart:(id)a0;
- (void)fullScreenPopPanBegin;
- (void)fullScreenPopRestore;
- (void)fullScreenPopEnd;
- (BOOL)canExitDeterminedByRecording:(id)a0;
- (BOOL)enableRoomPopToShowPipGuide;
- (void)enterRoomSelfOnRecord:(BOOL)a0;
- (void)enterRoomFailedWithReason:(unsigned long long)a0;
- (void)enterRoomBeenKickedOut;
- (void)enterRoomBeenForbiddenWithReason:(unsigned long long)a0;
- (void)checkVSRoomOrientationIfNeeded;
- (id)beenKickedOut;
- (void)enableCloseAction;
- (void)executeCloseAction;
- (BOOL)askForForceClose;
- (void)preReusePlayerWithSwipe;
- (void)handlePopGestureWhenAppeared;
- (void)handlePopGestureWhenDisappear;
- (void)handleCloseWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)topViewController;

@end
