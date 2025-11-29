@class UIStackView, UIImageView, AWEEnterpriseGoodsListViewModel, UIView, UILabel, NSDate;

@interface AWEEnterpriseGoodsListView : AWEEnterpriseMessageBaseView

@property (retain, nonatomic) NSDate *startLoadTimeDate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIStackView *itemStack;
@property (retain, nonatomic) UIView *separatorLine;
@property (weak, nonatomic) AWEEnterpriseGoodsListViewModel *viewModel;

- (void)bindViewModel:(id)a0;
- (void)constraintSubviews;
- (void)viewTapped;
- (void)p_configStackViewWithShowStatus:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
