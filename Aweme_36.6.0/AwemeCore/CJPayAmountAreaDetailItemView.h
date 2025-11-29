@class UILabel, UIImageView, MASConstraint;

@interface CJPayAmountAreaDetailItemView : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *tipIconImageView;
@property (retain, nonatomic) MASConstraint *detailLabelRightSelfConstraint;
@property (retain, nonatomic) MASConstraint *detailLabelRightIconViewConstraint;
@property (copy, nonatomic) id /* block */ clickedIconTipsBlock;

- (void)p_iconClicked;
- (void)updateWithNameStr:(id)a0 detailStr:(id)a1 isDetailHightLight:(BOOL)a2 isShowTips:(BOOL)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
