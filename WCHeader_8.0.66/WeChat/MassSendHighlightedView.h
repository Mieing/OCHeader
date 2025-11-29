@class UIColor, NSSet;

@interface MassSendHighlightedView : UIView {
    NSSet *m_touches;
}

@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (copy, nonatomic) id /* block */ handleTouchUpInside;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
