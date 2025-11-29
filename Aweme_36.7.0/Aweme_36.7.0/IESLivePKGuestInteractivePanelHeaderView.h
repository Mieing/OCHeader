@class UIImageView, UILabel, UIView, UIButton;

@interface IESLivePKGuestInteractivePanelHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *indicatorIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *sortLeftLabel;
@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *switchIcon;
@property (nonatomic) BOOL isPaidLinkmic;
@property (retain, nonatomic) UIView *guideTipsContainerView;
@property (retain, nonatomic) UIView *indicateTipsContainerView;
@property (retain, nonatomic) UIView *sortTypeContainerView;
@property (copy, nonatomic) id /* block */ didTapConfirmBlock;
@property (copy, nonatomic) id /* block */ didTapCloseBlock;
@property (nonatomic) BOOL sortByTime;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ onSwitchSortType;

- (void)didTapConfirmButton;
- (void)showSortTypeWithIndicateTips:(BOOL)a0 guideTips:(BOOL)a1;
- (void).cxx_destruct;
- (void)onTapAction;
- (id)initWithReuseIdentifier:(id)a0;
- (void)didTapCloseButton;
- (void)layoutUI;

@end
