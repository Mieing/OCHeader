@class NSString, UIView;

@interface MinimizationTransitionContext : NSObject

@property (retain, nonatomic) UIView *taskSnapshotView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } taskSnapshotViewInitFrame;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) UIView *fakeFromView;
@property (retain, nonatomic) UIView *realFromView;
@property (retain, nonatomic) UIView *backgroundShadowView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromViewInitFrame;
@property (nonatomic) unsigned int type;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) UIView *floatSnapshotView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } floatFrame;
@property (nonatomic) struct CGSize { double width; double height; } floatContentSize;
@property (nonatomic) BOOL snapshotSync;

- (id)init;
- (void)clearAnimationContext;
- (void).cxx_destruct;

@end
