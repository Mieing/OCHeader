@class UIView, NSString, ACCCustomStickerViewModel, UINavigationController, AWECustomPhotoStickerEditConfig, AWEModalTransitionDelegate, AWETranslationTransitionController, CAKAlbumViewController, AWECustomPhotoStickerEditViewController;
@protocol ACCInfoStickerServiceProtocol, ACCLoadingViewProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCStickerPanelServiceProtocol, ACCCTRServiceProtocol, ACCEditServiceProtocol, ACCSequencePlayControlServiceProtocol;

@interface ACCCustomStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver, ACCCustomStickerComponentProtocol, ACCDraftResourceRecoverProtocol>

@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationTransitionDelegate;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *pickId;
@property (nonatomic) long long cutoutType;
@property int currentId;
@property (retain, nonatomic) AWECustomPhotoStickerEditConfig *currentConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (weak, nonatomic) UINavigationController *customStickerEditNavVc;
@property (weak, nonatomic) AWECustomPhotoStickerEditViewController *editVC;
@property (weak, nonatomic) CAKAlbumViewController *resourcePickerViewController;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCInfoStickerServiceProtocol> infoStickerService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) ACCCustomStickerViewModel *viewModel;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (copy, nonatomic) id /* block */ dismissPanelHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateTheNecessaryResourcesForPublishViewModel:(id)a0 completion:(id /* block */)a1;

- (id)barItem;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)dismissModalStackAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isLocalCutoutEnabled;
- (void)selectCustomSticker:(id)a0 fromTab:(id)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (BOOL)checkErrorMsgWithFetchedAsset:(id)a0;
- (void)loadAlbumCustomSticker:(id)a0 asset:(id)a1 completionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (void)showCustomStickerPreview:(id)a0 pickerId:(id)a1 imageData:(id)a2 dataUTI:(id)a3 info:(id)a4 completionBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (BOOL)checkErrorMsgWithFetchedImageData:(id)a0 dataUTI:(id)a1 info:(id)a2 limitConfig:(id)a3;
- (void)saveAndApplySticker:(id)a0 config:(id)a1 pickId:(id)a2 completionBlock:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (void)trackForEnterCustomStickerEvent:(id)a0 extraParams:(id)a1;
- (id)customStickerEffectDict;
- (void).cxx_destruct;
- (void)dealloc;

@end
