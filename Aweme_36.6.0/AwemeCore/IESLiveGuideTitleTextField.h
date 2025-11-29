@class NSString, UIColor;

@interface IESLiveGuideTitleTextField : UITextField

@property (copy, nonatomic) NSString *titlePlaceholder;
@property (retain, nonatomic) UIColor *placeholderTextColor;

- (void)textDidChanged:(id)a0;
- (void).cxx_destruct;
- (void)setPlaceholder:(id)a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
