@class UITouch;
@protocol MMCellTapGestureRecognizerActionDelegate;

@interface MMCellTapGestureRecognizer : UIGestureRecognizer

@property (nonatomic) struct CGPoint { double x; double y; } point;
@property (retain, nonatomic) UITouch *touch;
@property (weak, nonatomic) id<MMCellTapGestureRecognizerActionDelegate> actionDelegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void).cxx_destruct;

@end
