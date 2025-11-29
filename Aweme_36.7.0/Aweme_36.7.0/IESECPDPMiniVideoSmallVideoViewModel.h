@class IESECGoodsDetailMiniVideoModel, NSString;
@protocol IESECGoodsDetailContainerProtocol;

@interface IESECPDPMiniVideoSmallVideoViewModel : IESECPDPMiniVideoViewModel <IESECPDPContainerVCLifeCycleReceiverProtocol, IESECGoodsDetailMiniVideoViewDelegate>

@property (nonatomic) BOOL didClosed;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) IESECGoodsDetailMiniVideoModel *model;
@property (nonatomic) BOOL shouldCreateSmallVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(id)a0;
- (void)containerViewWillDisappear:(id)a0;
- (id)generateTrackParams;
- (void)containerViewWillDismiss:(id)a0;
- (void)container:(id)a0 didSwitchTo:(long long)a1;
- (void)containerPackApiDidBack:(id)a0;
- (BOOL)originMuteState;
- (void)miniVideoViewClose:(id)a0;
- (void)miniVideoViewPauseByAction;
- (void)miniVideoViewPlayByAction:(id)a0;
- (void)miniVideoViewMuteStateChangedByAction:(BOOL)a0 window:(id)a1;
- (void)miniVideoViewPlay:(id)a0;
- (void)initializeWithContainer:(id)a0;
- (BOOL)pdp_shouldPlayerBeControlled;
- (id)pdp_playerScene;
- (void)pdp_onAllPlayerPausedWithPrevPlayer:(id)a0;
- (void)setupMiniWindowVideoView;
- (void)changeMiniVideoStatusWithContainer:(id)a0;
- (void)tryPlaySmallVideo;
- (void)tryPauseSmallVideo;
- (double)bottomLimit;
- (void).cxx_destruct;
- (id)init;
- (id)parameters;
- (id)createView;

@end
