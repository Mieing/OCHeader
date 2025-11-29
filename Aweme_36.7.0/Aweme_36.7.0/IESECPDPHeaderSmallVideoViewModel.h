@class IESECGoodsDetailMiniVideoView, NSString;
@protocol IESECGoodsDetailContainerProtocol, IESECGoodsDetailPageProtocol;

@interface IESECPDPHeaderSmallVideoViewModel : IESECPDPMiniVideoViewModel <IESECGoodsDetailMiniVideoViewDelegate>

@property (retain, nonatomic) IESECGoodsDetailMiniVideoView *headVideoFloatEntry;
@property (weak, nonatomic) id<IESECGoodsDetailPageProtocol> page;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) BOOL shouldForcePlayWhenBackToHeader;
@property (nonatomic) BOOL didCloseByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageViewDidAppear:(id)a0;
- (void)miniVideoViewClose:(id)a0;
- (void)miniVideoViewCloseByAction:(id)a0;
- (void)miniVideoViewMuteStateChangedByAction:(BOOL)a0 window:(id)a1;
- (void)miniWindowDidTap:(id)a0;
- (void)miniVideoViewStopByAction:(id)a0;
- (void)pageViewDidRender:(id)a0;
- (void)page:(id)a0 didScrollWithOffsetY:(double)a1;
- (void)initializeWithContainer:(id)a0;
- (void)initializeWithPage:(id)a0;
- (BOOL)pdp_canSyncDisplayWithPlayerOnFloat:(id)a0;
- (void)pdp_showPlayerOnFloat;
- (void)pdp_dismissPlayerOnFloat;
- (BOOL)pdp_shouldDisplayStateBeControlled;
- (id)pdp_playerScene;
- (void)trackHeadVideoFloatEntryShowWithVideoType:(id)a0 trackMeta:(id)a1;
- (void)resetWindowPanableZone;
- (void)setupHeadVideoFloatEntry;
- (void).cxx_destruct;
- (void)play;
- (void)pause;

@end
