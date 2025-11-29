@protocol MMUITextFieldDelegate;

@interface MMUITextField : UITextField

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contenInsets;
@property (nonatomic) unsigned long long maxTextLength;
@property (weak, nonatomic) id<MMUITextFieldDelegate> mmDelegate;
@property (nonatomic) double clearButtonRightMargin;
@property (nonatomic) struct CGSize { double width; double height; } clearButtonSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidChange:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textsRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })__contentInsets;
- (void).cxx_destruct;

@end
