@class AWEBubble;

@interface AWEIMUrgeGenerateContentBubble : UIView

@property (retain, nonatomic) AWEBubble *bubble;

+ (id)showBubbleForView:(id)a0 content:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 inDirection:(unsigned long long)a3 dismissTime:(double)a4;
+ (id)showBubbleForView:(id)a0 content:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 inDirection:(unsigned long long)a3 dismissTime:(double)a4 completion:(id /* block */)a5;
+ (id)showBubbleForView:(id)a0 content:(id)a1;
+ (id)showBubbleForView:(id)a0 content:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 inDirection:(unsigned long long)a3 dismissTime:(double)a4 numberOfLines:(long long)a5 fixedSize:(struct CGSize { double x0; double x1; })a6;

- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
