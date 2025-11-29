@class NSString, UIScreenEdgePanGestureRecognizer, AFDMomentPopAnimator;
@protocol AFDMomentDetailFeedInterface;

@interface AFDMomentDetailSwipeBackComponent : AFDMomentDetailBaseComponent <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AFDMomentPopAnimator *animator;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgePan;
@property (weak, nonatomic) id<AFDMomentDetailFeedInterface> feedComponent;
@property (nonatomic) BOOL isInTransition;

@end
