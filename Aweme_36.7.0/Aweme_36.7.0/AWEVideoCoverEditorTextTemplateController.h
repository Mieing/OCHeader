@class NSIndexPath, NSString, AWEVideoCoverEditorTextTemplateViewModel, UIView, AWEVideoPublishViewModel, AWEVideoCoverEditorTextTemplatePanelView;
@protocol AWETextTemplateStickerOverlayProtocol, AWETextTemplateStickerErrorViewProtocol, AWEVideoCoverEditorTextTemplateControllerDelegate, AWETextTemplateUIConfigurationProtocol;

@interface AWEVideoCoverEditorTextTemplateController : UIViewController <AWETextTemplateModelDelegate, AWETextTemplateViewDelegate, AWETextTemplateDownloadObserverProtocol>

@property (retain, nonatomic) AWEVideoCoverEditorTextTemplatePanelView *panelView;
@property (retain, nonatomic) UIView<AWETextTemplateStickerOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<AWETextTemplateStickerErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEVideoCoverEditorTextTemplateViewModel *model;
@property (retain, nonatomic) id<AWETextTemplateUIConfigurationProtocol> uiConfig;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (weak, nonatomic) id<AWEVideoCoverEditorTextTemplateControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1 extraParams:(id)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (double)panelViewHeight;
- (id)commonTrackParams;
- (void)hideErrorView;
- (void)cancelSelect;
- (void)setCurrentEffectId:(id)a0;
- (void)loadStickerCategory;
- (void)loadStickerCategoryIfNeeded;
- (BOOL)disableDeSelect;
- (void)textTemplateViewDidClearSticker:(id)a0;
- (void)onErrorTap;
- (void)pickerViewDidSelectSticker:(id)a0 category:(id)a1 isAutoApply:(BOOL)a2;
- (void)preloadTextTemplateResourceIfNeededWithCenterIndexPath:(id)a0;
- (BOOL)stickerPickerModel:(id)a0 shouldApplySticker:(id)a1;
- (void)stickerPickerModelDidBeginLoadCategories:(id)a0;
- (void)stickerPickerModelDidFinishLoadCategories:(id)a0;
- (void)stickerPickerModelDidFailLoadCategories:(id)a0 withError:(id)a1;
- (void)stickerPickerModelDidSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)stickerPickerModelDidSelectNewStickerIdentifie:(id)a0 oldStickerIdentifier:(id)a1;
- (void)stickerPickerModel:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerPickerModel:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)stickerPickerModel:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerPickerModel:(id)a0 didBeginLoadStickersWithCategory:(id)a1 tabIndex:(long long)a2;
- (void)stickerPickerModel:(id)a0 didFinishLoadStickersWithCategory:(id)a1 tabIndex:(long long)a2;
- (void)stickerPickerModel:(id)a0 didFailLoadStickersWithCategory:(id)a1 tabIndex:(long long)a2 error:(id)a3;
- (void)stickerPickerModel:(id)a0 didUpdateStickersWithCategory:(id)a1 tabIndex:(long long)a2;
- (void)textTemplateView:(id)a0 didSelectTabIndex:(long long)a1;
- (BOOL)textTemplateView:(id)a0 isStickerSelected:(id)a1;
- (void)textTemplateView:(id)a0 didSelectSticker:(id)a1 category:(id)a2 indexPath:(id)a3;
- (void)textTemplateView:(id)a0 willDisplaySticker:(id)a1 indexPath:(id)a2;
- (void)textTemplateView:(id)a0 finishScrollingTopBottom:(BOOL)a1;
- (void)textTemplateView:(id)a0 finishScrollingLeftRight:(BOOL)a1;
- (void)clearStickerApplyButtonClicked:(id)a0;
- (id)initWithPanelName:(id)a0 uiConfig:(id)a1 publishModel:(id)a2 viewModel:(id)a3;
- (void)reloadData;
- (void).cxx_destruct;
- (void)setCurrentEffect:(id)a0;
- (void)selectDefaultCategory;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)showLoadingView;
- (void)showErrorView;
- (void)hideLoadingView;

@end
