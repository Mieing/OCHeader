@class ACCAEEffectPanelEffectUIConfiguration, ACCAEEffectPickerPanelUIConfiguration, NSString, ACCAEEffectCategoryUIConfiguration, UIView, ACCAEEffectPanelViewModel, ACCAEPanelTitleView;
@protocol ACCAEEffectPickerViewControllerDelegate, AWEStickerPickerEffectErrorViewProtocol, AWEStickerPickerViewProtocol, AWEStickerPickerEffectOverlayProtocol, ACCAEEffectTrackerService;

@interface ACCAEEffectPickerViewController : UIViewController <ACCAEEffectPanelViewModelDelegate, AWEStickerPickerViewDelegate, ACCAEPanelTitleViewDelegate>

@property (retain, nonatomic) ACCAEEffectPanelViewModel *viewModel;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) ACCAEPanelTitleView *titleView;
@property (retain, nonatomic) UIView<AWEStickerPickerViewProtocol> *effectView;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectErrorViewProtocol> *errorView;
@property (retain, nonatomic) ACCAEEffectCategoryUIConfiguration *categoryUIConfiguration;
@property (retain, nonatomic) ACCAEEffectPanelEffectUIConfiguration *effectUIConfiguration;
@property (retain, nonatomic) ACCAEEffectPickerPanelUIConfiguration *panelUIConfiguration;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly, nonatomic) double contentViewHeight;
@property (weak, nonatomic) id<ACCAEEffectPickerViewControllerDelegate> delegate;
@property (nonatomic) long long usageScene;
@property (retain, nonatomic) id<ACCAEEffectTrackerService> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideErrorView;
- (void)showOnViewController:(id)a0 animated:(BOOL)a1 animations:(id /* block */)a2;
- (void)advanceEditorEffectPanelViewModel:(id)a0 didBeginLoadListWithCategory:(id)a1 isLoadMore:(BOOL)a2 tabIndex:(unsigned long long)a3;
- (void)advanceEditorEffectPanelViewModel:(id)a0 didFinishLoadListWithCategory:(id)a1 isLoadMore:(BOOL)a2 tabIndex:(unsigned long long)a3;
- (void)advanceEditorEffectPanelViewModel:(id)a0 didFailLoadListWithCategory:(id)a1 isLoadMore:(BOOL)a2 tabIndex:(unsigned long long)a3;
- (void)advanceEditorEffectPanelViewModelDidFinishLoadCategories:(id)a0;
- (void)advanceEditorEffectPanelViewModelDidBeginLoadCategories:(id)a0;
- (void)advanceEditorEffectPanelViewModelDidFailLoadCategories:(id)a0;
- (void)advanceEditorEffectPanelViewModelDidUpdateCurrentApplyModel:(id)a0;
- (void)setupEffectPickerView;
- (void)loadCategoriesInfo;
- (id)configTitleViewString;
- (double)effectPickerViewHeight;
- (void)onErrorViewTap;
- (void)predownloadNextEffectsIfNeeded;
- (void)dismissViewControllerWithAnimated:(BOOL)a0 dismissType:(id)a1;
- (void)stickerPickerView:(id)a0 didSelectTabIndex:(long long)a1;
- (BOOL)stickerPickerView:(id)a0 isStickerSelected:(id)a1 category:(id)a2;
- (void)stickerPickerView:(id)a0 didSelectSticker:(id)a1 category:(id)a2 indexPath:(id)a3;
- (void)stickerPickerViewDidClearSticker:(id)a0;
- (BOOL)stickerPickerViewShouldSupportSearchFeature:(id)a0;
- (void)titleView:(id)a0 didTapTitleConfirmBtn:(id)a1;
- (void)titleView:(id)a0 didTapTitleCancelBtn:(id)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)showLoadingView;
- (void)showErrorView;
- (void)setupContentView;
- (double)titleViewHeight;
- (void)setupTitleView;
- (void)hideLoadingView;

@end
