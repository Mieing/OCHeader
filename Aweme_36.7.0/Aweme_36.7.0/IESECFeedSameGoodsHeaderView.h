@class UILabel, UIButton, IESECAlertView;

@interface IESECFeedSameGoodsHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *tipsIcon;
@property (retain, nonatomic) IESECAlertView *alert;
@property (nonatomic) BOOL shouldHideTips;

- (void)tipsButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
