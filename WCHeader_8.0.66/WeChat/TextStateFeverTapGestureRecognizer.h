@class UITouch;

@interface TextStateFeverTapGestureRecognizer : UIGestureRecognizer

@property (nonatomic) unsigned long long tapCount;
@property (retain, nonatomic) UITouch *activeTouch;
@property (retain, nonatomic) UITouch *recentTouch;
@property (nonatomic) struct CGPoint { double x; double y; } originPoint;
@property (nonatomic) BOOL isInLongPress;
@property (copy, nonatomic) id /* block */ triggerHandler;
@property (copy, nonatomic) id /* block */ singleTapHandler;
@property (copy, nonatomic) id /* block */ longPressHandler;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)refreshLongTimeout;
- (void)cancelLongTimeout;
- (void)longPressTimeout;
- (void)refreshTapTimeout;
- (void)cancelTapTimeout;
- (void)tapTimeout;
- (void)reset;
- (unsigned int)tapType;
- (void).cxx_destruct;

@end
