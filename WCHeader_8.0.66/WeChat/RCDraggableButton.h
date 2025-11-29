@class UILongPressGestureRecognizer;

@interface RCDraggableButton : MMUIButton {
    BOOL _isDragging;
    BOOL _singleTapBeenCanceled;
    struct CGPoint { double x; double y; } _beginLocation;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (nonatomic) BOOL draggable;
@property (nonatomic) BOOL autoDocking;
@property (copy, nonatomic) id /* block */ longPressBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ doubleTapBlock;
@property (copy, nonatomic) id /* block */ draggingBlock;
@property (copy, nonatomic) id /* block */ dragDoneBlock;
@property (copy, nonatomic) id /* block */ autoDockingBlock;
@property (copy, nonatomic) id /* block */ autoDockingDoneBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initInView:(id)a0 WithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)defaultSetting;
- (void)gestureRecognizerHandle:(id)a0;
- (void)buttonTouched;
- (void)executeButtonTouchedBlock;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)isDragging;
- (void).cxx_destruct;

@end
