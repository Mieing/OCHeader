@class NSArray;

@interface AWEGrouponC2TransformerSkeletonView : UIView

@property (copy, nonatomic) NSArray *skeletonViews;

- (id)halfInfoAreaView;
- (void)addSkeletonFromView:(id)a0 toArray:(id)a1;
- (id)bottomInfoAreaView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupUI;

@end
