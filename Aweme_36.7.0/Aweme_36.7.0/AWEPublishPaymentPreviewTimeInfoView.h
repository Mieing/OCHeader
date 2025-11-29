@class UILabel, UIButton;

@interface AWEPublishPaymentPreviewTimeInfoView : UIView

@property (weak, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) UIButton *selectTimeButton;
@property (copy, nonatomic) id /* block */ selectTimeBlock;

- (void)updateSelectTimeInfo:(id)a0;
- (void)updateDescInfo:(id)a0;
- (void)selectTimeButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
