@class MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton, NSString, MMFinderLiveShopShelfHeaderViewModel, MMLiveShopShelfDragBar, MMUIButton, UIView;

@interface MMFinderLiveShopShelfAnchorLocalLifeHeaderView : UIView <MMFinderLiveShopShelfHeaderContentView>

@property (retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *viewModel;
@property (retain, nonatomic) MMLiveShopShelfDragBar *dragBar;
@property (retain, nonatomic) MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton *miniAppButton;
@property (retain, nonatomic) MMUIButton *anchorSettingButton;
@property (retain, nonatomic) UIView *line;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithHeaderViewModel:(id)a0;
- (void)onMiniAppButtonClicked:(id)a0;
- (void)onAnchorSettingButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
