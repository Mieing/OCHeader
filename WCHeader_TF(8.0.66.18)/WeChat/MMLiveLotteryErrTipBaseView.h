@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface MMLiveLotteryErrTipBaseView : MMPageSheetBaseView

@property (nonatomic) long long previousOrientation;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionButtonBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateErrTipBaseViewTitle:(id)a0;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)pageSheetDidRotation;
- (void).cxx_destruct;

@end
