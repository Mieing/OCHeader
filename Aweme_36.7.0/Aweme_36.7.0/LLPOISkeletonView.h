@class LLPOISkeletonViewModel, UIView;

@interface LLPOISkeletonView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) LLPOISkeletonViewModel *vm;

+ (id)skeletonViewWithRawData:(id)a0 delegate:(id)a1 trackParams:(id)a2;

- (void)setupWithModel:(id)a0;
- (void)hideSkeletonView;
- (void)showSkeletonOnView:(id)a0;
- (void).cxx_destruct;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
