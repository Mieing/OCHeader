@class NSString, UIImageView;

@interface RTVInteractionToolBarIconCell : RTVInteractionToolBarCell

@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, nonatomic) UIImageView *imageView;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__configCustomIconName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
