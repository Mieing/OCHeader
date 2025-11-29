@class AWENearbyC2TransformerSkeletonView, UIViewController, NSString, UITapGestureRecognizer;
@protocol AWENearbyC2ContainerTransformerSectionProtocol;

@interface AWENearbyC2TransformerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWENearbyC2TransformerSkeletonView *skeletonView;
@property (nonatomic) double skeletonHeight;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (weak, nonatomic) id<AWENearbyC2ContainerTransformerSectionProtocol> child;
@property (weak, nonatomic) UIViewController *parentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChildVC;
- (void)addSkeleton;
- (void)removeSkeleton;
- (void)emptyTap:(id)a0;
- (void)setSkeletonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)config;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
