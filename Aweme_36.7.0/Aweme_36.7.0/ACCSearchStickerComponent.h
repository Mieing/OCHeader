@class NSString, ACCSearchStickerViewController, ACCStickerSearchViewModel, AWEStudioEditStickerFeatureConfig, UIView;
@protocol ACCStickerServiceProtocol, ACCStickerPanelServiceProtocol, ACCVideoEditFlowControlService;

@interface ACCSearchStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver, ACCStickerPannelAnimationVCDelegate, ACCSearchStickerVCDelegate, ACCStickerPannelFilterDataSource>

@property (retain, nonatomic) AWEStudioEditStickerFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowControlService;
@property (retain, nonatomic) ACCStickerSearchViewModel *viewModel;
@property (weak, nonatomic) ACCSearchStickerViewController *searchVC;
@property (weak, nonatomic) UIView *searchStickerBgView;
@property (nonatomic) BOOL showingSearchVC;
@property (copy, nonatomic) id /* block */ dismissPanelHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (id)aAWEStudioGlobalConfig;
- (void)componentDidMount;
- (id)serviceBinding;
- (id)rootVC;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (void)startShowSearchVC;
- (void)searchStickerCollectionViewControllerWillShow;
- (void)searchTrackEvent:(id)a0 extraParams:(id)a1;
- (void)searchStickerCollectionViewControllerDismiss;
- (void)stickerPannelVCDidDismiss;
- (BOOL)canOpenLiveSticker;
- (void)searchStickerCollectionViewController:(id)a0 didSelectSticker:(id)a1 indexPath:(id)a2 downloadProgressBlock:(id /* block */)a3 downloadedBlock:(id /* block */)a4;
- (void)searchStickerCollectionViewControllerWillExit;
- (void).cxx_destruct;

@end
