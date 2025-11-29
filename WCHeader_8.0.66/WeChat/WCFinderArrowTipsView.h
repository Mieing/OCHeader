@class UILabel, UIView;

@interface WCFinderArrowTipsView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *bubbleView;
@property (nonatomic) double arrowWidth;
@property (nonatomic) double arrowHeight;
@property (nonatomic) unsigned int arrowType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tipsInsets;

- (void)moveTo:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)drawArrowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setupTipsLabel;
- (void)updateMargin;
- (void).cxx_destruct;

@end
