@class AWEBaseElement, NSString;

@interface AWEBaseElementView : UIView

@property (weak, nonatomic) AWEBaseElement *element;
@property (copy, nonatomic) NSString *elementClassName;
@property (nonatomic) BOOL subviewHitTestBeyondEdgeEnable;

- (void)layoutSubviews;
- (BOOL)isActiveOfView:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
