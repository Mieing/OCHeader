@class UIView;

@interface ShareElementPair : NSObject

@property (weak, nonatomic) UIView *fromView;
@property (weak, nonatomic) UIView *toView;
@property (weak, nonatomic) UIView *originParent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) struct CGPoint { double x; double y; } originPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originBounds;
@property (nonatomic) double duration;
@property (nonatomic) BOOL crossPage;

- (id)initWithFrom:(id)a0 to:(id)a1;
- (void)backToOrigin;
- (void).cxx_destruct;

@end
