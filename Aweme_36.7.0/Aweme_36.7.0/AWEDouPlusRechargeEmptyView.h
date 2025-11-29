@class UILabel, UIButton;
@protocol AWEDouPlusRechargeEmptyViewDelegate;

@interface AWEDouPlusRechargeEmptyView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (weak, nonatomic) id<AWEDouPlusRechargeEmptyViewDelegate> delegate;

- (void)retryBtnClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
