@class IESECButton, NSString, IESECServiceProxy, UIView, FBKVOController, IESECWinContext;
@protocol IESECWinFeedLinkedService, IESECWinLiveService, IESECWinDataStatusService, IESECLivePlayer, IESECWinMainScrollService;

@interface IESECWinLiveNewVC : UIViewController <AWELiveRoomMessage, AWEECEnterRoomTransitionOutterContextProvider, IESECLivePlayerViewDelegate> {
    BOOL _hasObserverOffset;
    BOOL _smallWindowState;
    double _liveOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *mask;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollServiceProxy;
@property (retain, nonatomic) IESECButton *muteButton;
@property (retain, nonatomic) UIView *enterLiveRoomView;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveServiceProxy;
@property (retain, nonatomic) UIView<IESECLivePlayer> *livePlayerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (id)zoomTransitionStartView;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)registerMessage;
- (void)interactedTransitionAnimationComplete;
- (void)unregisterMessage;
- (void)transitionTransferToURLString:(id)a0;
- (void)dequeuePlayer:(BOOL)a0;
- (BOOL)isSmallWindowState;
- (void)didTapMuteButton;
- (void)transferToLiveRoomWithClick;
- (void)p_setLiveMuted:(BOOL)a0;
- (void)transferToLiveRoomWithClickType:(unsigned long long)a0;
- (void)transferToLiveRoomWithClickType:(unsigned long long)a0 transferURL:(id)a1;
- (double)liveContentHeight;
- (double)liveVisibleHeight;
- (void)p_setCurrentLivePlayerStoped:(BOOL)a0;
- (void)bindActionsAndKVO;
- (void)observerScrollOffset;
- (void)offsetYChanged;
- (void)p_delayAttachLiveMiniWindowIfNeeded;
- (void)p_detachLiveMiniWindowIfNeeded;
- (void)p_attachLiveMiniWindowIfNeeded;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpConstraints;

@end
