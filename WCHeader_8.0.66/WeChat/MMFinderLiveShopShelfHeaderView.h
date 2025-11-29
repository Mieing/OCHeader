@class UIView, NSString, MMFinderLiveShopShelfHeaderSubInfosView, MMFinderLiveShopShelfAudienceHeaderButtonGroupView, UIButton, MMFinderLiveShopShelfDisplayWindowButton, MMLiveShopShelfDragBar, MMFinderLiveShopShelfHeaderGuideBar, MMUIButton, MMFinderLiveShopShelfHeaderViewModel;

@interface MMFinderLiveShopShelfHeaderView : UIView <MMFinderLiveShopShelfHeaderViewModelView, MMFinderLiveShopShelfHeaderSubInfosViewLoadDelegate, MMFinderLiveShopShelfDisplayWindowButtonLoadDelegate, MMFinderLiveShopShelfHeaderGuideBarDelegate, MMFinderLiveShopShelfHeaderContentView>

@property (retain, nonatomic) MMFinderLiveShopShelfDisplayWindowButton *displayWindowButton;
@property (retain, nonatomic) MMFinderLiveShopShelfHeaderSubInfosView *subInfosView;
@property (retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveShopShelfDragBar *dragBar;
@property (retain, nonatomic) MMFinderLiveShopShelfAudienceHeaderButtonGroupView *audienceButtonGroupView;
@property (retain, nonatomic) MMUIButton *anchorSettingBtn;
@property (retain, nonatomic) UIButton *displayWindowBtn;
@property (retain, nonatomic) MMFinderLiveShopShelfHeaderGuideBar *guideBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWithHeaderViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onLoadImageOK;
- (void)onClickDisplayWindowButton:(id)a0;
- (void)onClickAnchorSettingBtn:(id)a0;
- (id)anchorSettingButton;
- (id)goodsOrderCenterButton;
- (id)shoppingCartButton;
- (id)favoriteButton;
- (id)favoriteIconView;
- (id)displayWindowView;
- (id)searchButton;
- (void)onGuideBarClicked;
- (void)onShelfContentDisplay;
- (void).cxx_destruct;

@end
