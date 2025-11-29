@protocol AWEGCPFullscreenTransitionOuterContextProvider;

@interface IESGCPPlayerTransitionContext : NSObject <AWEModernFullscreenTransitionOuterContextProvider>

@property (weak, nonatomic) id<AWEGCPFullscreenTransitionOuterContextProvider> provider;
@property (nonatomic) BOOL isMix;
@property (nonatomic) BOOL isFiltered;
@property (nonatomic) BOOL isRequested;
@property (nonatomic) long long outIndexOfMix;

- (id)liveTransitionContext;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (id)initProvider:(id)a0;
- (void).cxx_destruct;

@end
