@class MMUILabel, MMUIButton;

@interface MJInspectorToolBar : MMUIView

@property (readonly, nonatomic) MMUILabel *titleLabel;
@property (readonly, nonatomic) MMUIButton *doneButton;
@property (readonly, nonatomic) MMUIButton *cancelButton;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (nonatomic) BOOL canPassthroughGesture;

+ (id)instanceWithTitle:(id)a0;

- (void)setupViews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
