@class UILabel, UIImageView, UIView;

@interface CJPayDyPayQualityGroupTitleCell : CJPayStyleBaseListCellView

@property (retain, nonatomic) UILabel *groupTitleLabel;
@property (retain, nonatomic) UILabel *buttonTitleLabel;
@property (retain, nonatomic) UIImageView *buttonIcon;
@property (retain, nonatomic) UIView *buttonHotArea;

- (void)bindViewModel:(id)a0;
- (void)p_reloadContentWithViewModel:(id)a0;
- (void)p_rightButtonClick;
- (void).cxx_destruct;
- (void)setupUI;

@end
