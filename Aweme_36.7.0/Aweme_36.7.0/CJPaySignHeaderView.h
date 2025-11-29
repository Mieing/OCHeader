@class UIImageView, UILabel, CJPayMarketingMsgView;

@interface CJPaySignHeaderView : UIView

@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *logoDescLabel;
@property (retain, nonatomic) UILabel *logoSubDescLabel;
@property (nonatomic) BOOL isSignOnly;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
