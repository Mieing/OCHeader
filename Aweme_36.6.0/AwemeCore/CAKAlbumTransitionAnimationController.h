@class NSString;
@protocol CAKAlbumTransitionContextProvider, CAKAlbumTransitionDelegateProtocol;

@interface CAKAlbumTransitionAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) id<CAKAlbumTransitionContextProvider> contextProvider;
@property (weak, nonatomic) id<CAKAlbumTransitionDelegateProtocol> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContextProvider:(id)a0 transitionDelegate:(id)a1;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
