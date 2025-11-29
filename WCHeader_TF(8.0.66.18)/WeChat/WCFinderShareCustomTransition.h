@class NSString;
@protocol WCFinderShareAbstractCell;

@interface WCFinderShareCustomTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<WCFinderShareAbstractCell> shareCell;
@property (copy, nonatomic) NSString *shareCellIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toRect;
@property (nonatomic) BOOL willPresent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindTransitionAnimatorFromCell:(id)a0 fromFeedId:(id)a1 fromVC:(id)a2 toVC:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionRectForFeedId:(id)a0 image:(id)a1 inNav:(id)a2;

- (id)initWithShareCell:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayImageFrameForDismiss:(id)a0;
- (void)updateToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
