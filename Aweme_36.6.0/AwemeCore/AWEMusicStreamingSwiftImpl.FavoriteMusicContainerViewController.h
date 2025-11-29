@interface AWEMusicStreamingSwiftImpl.FavoriteMusicContainerViewController : AWEBaseListViewController <AWEProfileTabCustomProtocol, AWERouterViewControllerProtocol, AWEMusicBottomPlayerViewDelegate, AWETabListItemViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewHasAppeared;
    void /* unknown type, empty encoding */ popView;
    void /* function */ reloadRightFixedArea;
    void /* unknown type, empty encoding */ collectMusicChanged;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

@property (nonatomic, copy) id /* block */ reloadRightFixedArea;

- (id)tabContentScrollView;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)bottomSpecialView;
- (struct CGSize { double x0; double x1; })bottomSpecialViewSize;
- (void)playerViewDidTapCover:(id)a0;
- (void)playerViewDidTapInfo:(id)a0;
- (void)playerViewDidTapConfirmBtn:(id)a0;
- (BOOL)shouldShowConfirmButton;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
