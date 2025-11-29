@class UIView;

@interface WABoundsCollector : NSObject

@property (retain, nonatomic) UIView *toView;
@property (nonatomic) double minx;
@property (nonatomic) double miny;
@property (nonatomic) double maxx;
@property (nonatomic) double maxy;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectBoundsFromView:(id)a0 ToView:(id)a1;
- (void)collectView:(id)a0;
- (void)collectPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
