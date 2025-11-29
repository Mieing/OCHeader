@class NSString, IESLiveGameInteractStickerImpl;
@protocol IESLiveSubscription;

@interface IESLiveGameInteractStickerFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, HTSLiveStreamPlayerAction, IESLiveRevenueInteractAction>

@property (retain, nonatomic) IESLiveGameInteractStickerImpl *stickerImpl;
@property (retain, nonatomic) id<IESLiveSubscription> seiDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentWillDisappear;
- (void)componentDestroy;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (BOOL)stickerEnable;
- (void)playerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeSEIObserver;
- (void)observeSEI;
- (BOOL)shouldShowViceViewInLandscapeGameRoom;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
