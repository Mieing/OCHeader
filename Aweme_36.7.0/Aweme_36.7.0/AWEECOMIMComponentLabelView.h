@class AWEECOMIMTextComponent;

@interface AWEECOMIMComponentLabelView : UIView

@property (retain, nonatomic) AWEECOMIMTextComponent *textComponentView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentTextInsets;
+ (double)topPadding;
+ (double)bottomPadding;

- (void)updateWithTextComponnetModel:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
