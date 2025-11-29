@class UILabel, UIView;

@interface IESLiveDirectorStatusView : UIView

@property (retain, nonatomic) UIView *leftDotView;
@property (retain, nonatomic) UILabel *leftTipsLabel;
@property (retain, nonatomic) UILabel *rightTipsLabel;
@property (retain, nonatomic) UIView *rightOperationView;
@property (nonatomic) int status;
@property (copy, nonatomic) id /* block */ clickInterruptBlock;

- (void)clickInterrupt;
- (void).cxx_destruct;
- (void)updateStatus:(int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
