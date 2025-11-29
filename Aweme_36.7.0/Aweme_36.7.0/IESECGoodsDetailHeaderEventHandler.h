@class IESECGoodsDetailHeaderServiceProvider, NSString, IESECGoodsDetailPageContext, IESECGoodsDetailHeaderModel;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderContainerService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderTrackerService;

@interface IESECGoodsDetailHeaderEventHandler : NSObject <IESECMediaPreviewDelegate, IESECGoodsDetailViewUpdateMessage, IESECPdpPreviewMessage, IESECGoodsDetailHeaderEventHandlerService>

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) IESECGoodsDetailHeaderModel *headerModel;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderContainerService> container;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTrackerService> tracker;
@property (weak, nonatomic) IESECGoodsDetailPageContext *context;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (nonatomic) BOOL didTrackVideoShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateHeaderModel:(id)a0;
- (id)getElementViewInSliceXView:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)mediaPreviewTrackWithEventName:(id)a0 andParams:(id)a1 btmID:(id)a2;
- (void)mediaPreviewController:(id)a0 didDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 willDismissWithIndex:(long long)a1 isCurrentVideoTab:(BOOL)a2;
- (void)mediaPreviewController:(id)a0 didSwipeToIndex:(long long)a1 previousIndex:(long long)a2;
- (void)mediaPreviewController:(id)a0 didShowIndex:(long long)a1;
- (void)mediaPreviewDidShowTabAtIndex:(long long)a0 controller:(id)a1;
- (void)mediaPreviewDidClickTabAtIndex:(long long)a0 controller:(id)a1;
- (void)playerMuteStateDidChanged:(BOOL)a0;
- (void)videoActionMute:(BOOL)a0;
- (void)videoPreviewPlaybackStateDidChange:(unsigned long long)a0;
- (void)kolVideoDetailPreloadWithCompletion:(id /* block */)a0;
- (void)mediaPreviewControllerDidClickShareButton:(id)a0;
- (void)triggerActions:(id)a0;
- (id)getSliceViewWithSlice:(id)a0 fitWidth:(double)a1;
- (double)getSliceHeightWithSlice:(id)a0 fitWidth:(double)a1;
- (void)bindSliceViewWithSlice:(id)a0;
- (void)goodsDetailDidUpdateWithSKUChange:(id)a0 skuModifyType:(unsigned long long)a1 goodsDetailUID:(id)a2;
- (void)previewMediaAtIndex:(unsigned long long)a0;
- (void)previewMediaHeadMoreVideo;
- (void)scrollToIndex:(unsigned long long)a0 isPreviewIndex:(BOOL)a1;
- (BOOL)sendHeaderScrollView:(id)a0;
- (void)notificateCurrentPlayState:(id)a0;
- (void)headerViewShouldRecover:(BOOL)a0;
- (void)updateHeaderVideoWithStartTime:(double)a0;
- (void)headerVideoShouldForcePlayAtIndex:(unsigned long long)a0;
- (void)headerGoodCommentVideoShouldPlay:(BOOL)a0;
- (BOOL)headVideoShouldMute:(BOOL)a0;
- (void)containerUpdateMode:(long long)a0;
- (void)headerViewDidShowTail;
- (void)notifiyDefaultPostion;
- (void)tryExpandDefaultHideHeaderCells;
- (id)initWithServiceProvider:(id)a0 context:(id)a1 headerModel:(id)a2;
- (void)scrollMediaPreviewToItemWithSpecId:(id)a0 goodsDetailUID:(id)a1;
- (void)updateHeaderPendantIndex;
- (void)slideToIndex:(unsigned long long)a0 skuModifyType:(unsigned long long)a1;
- (void)scrollToIndex:(unsigned long long)a0 skuModifyType:(unsigned long long)a1;
- (void)cacheFirstVideoPlayTimeIfNeeded;
- (void)tryUpdateMuteStatusWithPlayer:(id)a0 videoModel:(id)a1 expectedMute:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
