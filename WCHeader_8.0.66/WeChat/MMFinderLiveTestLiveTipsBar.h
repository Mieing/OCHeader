@class CAShapeLayer, UILabel, UIView, MMUIButton;

@interface MMFinderLiveTestLiveTipsBar : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (copy, nonatomic) id /* block */ closeTestLiveBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)closeTestLiveClick;
- (void)updateSelfViewShapeClip;
- (void).cxx_destruct;

@end
