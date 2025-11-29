@class CJPayCommonListViewController, CJPayBaseListViewModel, UIView;
@protocol CJPayBaseListEventHandleProtocol;

@interface CJPayBaseListCellView : UITableViewCell

@property (retain, nonatomic) UIView *topMarginView;
@property (retain, nonatomic) UIView *bottomMarginView;
@property (readonly, weak, nonatomic) CJPayCommonListViewController *viewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CJPayBaseListViewModel *viewModel;
@property (weak, nonatomic) id<CJPayBaseListEventHandleProtocol> eventHandler;

- (void)bindViewModel:(id)a0;
- (void)p_baseMakeConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)didSelect;

@end
