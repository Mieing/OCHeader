@interface MinimizeVoiceControlButton : MMUIButton

@property (nonatomic) BOOL isLongPressing;
@property (nonatomic) long long buttonState;
@property (nonatomic) long long buttonStyle;
@property (copy, nonatomic) id /* block */ longPressBeganCallback;
@property (copy, nonatomic) id /* block */ longPressEndedCallback;
@property (copy, nonatomic) id /* block */ touchCallback;
@property (copy, nonatomic) id /* block */ cancellCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateButtonImage;
- (void)shrinkWithState;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)onTouchEnd:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
