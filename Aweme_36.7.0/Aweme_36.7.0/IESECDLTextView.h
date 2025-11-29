@class UILabel;

@interface IESECDLTextView : IESECDLView

@property (retain, nonatomic) UILabel *label;

- (void)clickAction;
- (void)renderDataWithModel:(id)a0;
- (void)bindDLEventWithEventData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
