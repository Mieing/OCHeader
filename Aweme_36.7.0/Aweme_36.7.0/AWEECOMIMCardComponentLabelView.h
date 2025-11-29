@class AWEECOMIMTextComponent;

@interface AWEECOMIMCardComponentLabelView : UIView

@property (retain, nonatomic) AWEECOMIMTextComponent *textComponentView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textContentInsets;
+ (double)bottomPadding;
+ (id)textFont;

- (void)updateWithTextComponentModel:(id)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
