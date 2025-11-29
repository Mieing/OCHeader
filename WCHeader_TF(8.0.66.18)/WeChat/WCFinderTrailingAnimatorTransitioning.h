@class WCFinderTransitionUserInfo, WCPlayerView, NSString, UIView, WCFinderTransitionAnimatorList, NSMutableArray;
@protocol WCFinderTrailingAnimatorDelegate;

@interface WCFinderTrailingAnimatorTransitioning : NSObject <UIViewControllerAnimatedTransitioning, WCFinderTransitionAnimatorCompleteable>

@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) UIView *cellMaskView;
@property (retain, nonatomic) UIView *copyedTabBar;
@property (retain, nonatomic) WCFinderTransitionAnimatorList *transitioningAnimationProvider;
@property (retain, nonatomic) WCFinderTransitionUserInfo *providerUserInfo;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<WCFinderTrailingAnimatorDelegate> delegate;
@property (retain, nonatomic) WCPlayerView *passPlayerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
