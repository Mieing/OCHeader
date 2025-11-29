@class UIView, ACCCustomStickerViewModel, NSString, UINavigationController, AWECustomPhotoStickerEditConfig, AWEModalTransitionDelegate, AWETranslationTransitionController, CAKAlbumViewController, AWECustomPhotoStickerEditViewController, NSNumber;
@protocol ACCAEInfoStickerServiceProtocol, DVERootViewControllerProtocol, ACCAdvanceEditStickerServiceProtocol, ACCLoadingViewProtocol, ACCStickerPanelServiceProtocol;

@interface ACCAECustomStickerComponent : ACCAdvanceEditComponent <ACCStickerPannelObserver>

@property (weak, nonatomic) id<DVERootViewControllerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCAdvanceEditStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCAEInfoStickerServiceProtocol> infoStickerService;
@property (retain, nonatomic) ACCCustomStickerViewModel *viewModel;
@property (retain, nonatomic) AWECustomPhotoStickerEditConfig *currentConfig;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationTransitionDelegate;
@property (weak, nonatomic) UINavigationController *customStickerEditNavVc;
@property (weak, nonatomic) AWECustomPhotoStickerEditViewController *editVC;
@property (weak, nonatomic) CAKAlbumViewController *resourcePickerViewController;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *pickId;
@property int currentId;
@property (nonatomic) long long cutoutType;
@property (nonatomic) BOOL cutoutAlgorithmDownloaded;
@property (copy, nonatomic) id /* block */ dismissPanelHandle;
@property (retain, nonatomic) NSNumber *willReplacedStickerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)infoStickerEditor;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)dismissModalStackAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)entranceWithTabName:(id)a0;
- (void)trackForEvent:(id)a0 extraParams:(id)a1;
- (BOOL)isLocalCutoutEnabled;
- (void)selectCustomSticker:(id)a0 fromTab:(id)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)customStickerBDTokenCert;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (BOOL)checkErrorMsgWithFetchedAsset:(id)a0;
- (void)loadAlbumCustomSticker:(id)a0 asset:(id)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)defaultImageManager;
- (void)showCustomStickerPreview:(id)a0 pickerId:(id)a1 imageData:(id)a2 dataUTI:(id)a3 info:(id)a4 completionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (BOOL)checkErrorMsgWithFetchedImageData:(id)a0 dataUTI:(id)a1 info:(id)a2 limitConfig:(id)a3;
- (void)saveAndApplySticker:(id)a0 config:(id)a1 pickId:(id)a2 completionBlock:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (BOOL)handleReplaceStickerWithContext:(id)a0 willSelectHandle:(id /* block */)a1 dismissPanelHandle:(id /* block */)a2;
- (void).cxx_destruct;

@end
