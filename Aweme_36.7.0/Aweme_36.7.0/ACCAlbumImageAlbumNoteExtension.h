@class UIView, UIControl, UIButton, ACCCanvasAdaptor, AWETranslationTransitionController, CAKAlbumViewController, ACCAlbumInputData, CAKAlbumAssetModel;
@protocol CAKAlbumPreviewPageBottomViewProtocol, CAKAlbumBottomViewProtocol;

@interface ACCAlbumImageAlbumNoteExtension : ACCAlbumExtension

@property (weak, nonatomic) UIControl *oneClickBtn;
@property (weak, nonatomic) UIControl *oneClickBtnForPreview;
@property (weak, nonatomic) UIView<CAKAlbumBottomViewProtocol> *bottomView;
@property (weak, nonatomic) UIView<CAKAlbumPreviewPageBottomViewProtocol> *preBottomView;
@property (weak, nonatomic) CAKAlbumViewController *albumViewController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) UIButton *imageNoteBtn;
@property (retain, nonatomic) UIButton *imageNoteBtnForPreview;
@property (nonatomic) BOOL disableImageNoteBtn;
@property (retain, nonatomic) ACCCanvasAdaptor *canvasAdaptor;
@property (retain, nonatomic) AWETranslationTransitionController *nextTranslationTransitionDelegate;
@property (retain, nonatomic) CAKAlbumAssetModel *currentPlayingAssetInPreview;
@property (nonatomic) BOOL hasPreFetchPicTemplate;

+ (Class)aACCMidVideoCreationProtocolClass;

- (id)btnText;
- (void)albumWillShowViewController:(id)a0;
- (void)albumViewControllerEndPreview:(id)a0;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void)albumDidDeleteAssetFromBottomView:(id)a0;
- (void)albumDidLoadPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidHiddenPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidLoadBottomView:(id)a0;
- (void)albumAssetsDidChangedWithAssets:(id)a0 type:(long long)a1;
- (BOOL)shouldShowImageNoteBtnWithModels:(id)a0;
- (void)refreshBottomViewButtonWithType:(long long)a0 shouldShowNoteBtn:(BOOL)a1;
- (void)updateNoteBtnDisable:(BOOL)a0;
- (void)trackNoteEntranceWith:(id)a0 extraInfo:(id)a1;
- (void)trackNoteButtonClicked;
- (BOOL)isHangOutEntranceNote;
- (void)handlePhotosImportCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (void)setupAssetIdentifierDict:(id)a0 assetModels:(id)a1;
- (id)aACCMidVideoCreationProtocol;
- (void)startCreativeAsNoteStyle:(id)a0;
- (void)previewControllerScrollViewDidEndDeceleratingWithAlbumAsset:(id)a0;
- (void).cxx_destruct;

@end
