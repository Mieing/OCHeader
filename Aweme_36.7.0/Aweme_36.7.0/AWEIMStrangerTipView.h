@class NSString, UILabel, UIView, UIButton;

@interface AWEIMStrangerTipView : UIView

@property (copy, nonatomic) NSString *tip;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) UIView *lineView;

- (void)didClickCloseButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
