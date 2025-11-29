@class AWEIMShapeView;

@interface AWEIMAudioRecordCancelView : AWEIMRichRecorderCommonView

@property (retain, nonatomic) AWEIMShapeView *shapeView;

- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)normalMode;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightMode;

@end
