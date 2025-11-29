@class NSMutableArray, UIView;

@interface WCPayUIView : MMUIView

@property (retain, nonatomic) UIView *hightLightMask;
@property (retain, nonatomic) NSMutableArray *bizAccessElems;
@property (nonatomic) BOOL enableHighlight;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
