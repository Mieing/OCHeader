@class MMMusicSetStatusBubbleTriangleView, UIImageView, MMUIButton, MMUILabel;
@protocol MMMusicSetStatusBubbleViewDelegate;

@interface MMMusicSetStatusBubbleView : MMUIView

@property (retain, nonatomic) MMUIButton *setStatusContainerBtn;
@property (retain, nonatomic) MMUILabel *prefixStatusLabel;
@property (retain, nonatomic) UIImageView *statusLogoImageView;
@property (retain, nonatomic) MMUILabel *suffixStatusLabel;
@property (retain, nonatomic) MMMusicSetStatusBubbleTriangleView *triangleView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorRect;
@property (weak, nonatomic) id<MMMusicSetStatusBubbleViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)internalInit;
- (void)setTriangleAnchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleSetStatusContainerButtonClick:(id)a0;
- (void).cxx_destruct;

@end
