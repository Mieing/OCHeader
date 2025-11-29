@class AWEIMCollapsibleBannerShowingViewManager, NSArray, NSString, NSMutableArray;
@protocol AWEIMCollapsibleBannerShowingViewContainerDelegate;

@interface AWEIMCollapsibleBannerShowingViewContainer : UIView <CAAnimationDelegate, AWEIMCollapsibleBannerShowingViewDelegate, AWEIMCollapsibleTopContainerViewContentProtocol>

@property (retain, nonatomic) AWEIMCollapsibleBannerShowingViewManager *manager;
@property (retain, nonatomic) NSMutableArray *bannerViewArray;
@property (nonatomic) BOOL isExpended;
@property (nonatomic) double imChatBigFontScale;
@property (copy, nonatomic) id /* block */ animationCompletionBlock;
@property (nonatomic) double conatinerTopOffset;
@property (nonatomic) double bannerSpaceWhenExpended;
@property (weak, nonatomic) id<AWEIMCollapsibleBannerShowingViewContainerDelegate> delegate;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL isPadSplitting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContainerFrame;
- (void)reloadWithoutAnimation;
- (double)p_selfWidth;
- (void)didClickShowingView:(id)a0;
- (void)__refreshBannerContent;
- (double)__heightForContainerWithIsExpended:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__frameForBannerAtIndex:(long long)a0 isExpended:(BOOL)a1;
- (void)__setupAllAnimationWithIsExpending:(BOOL)a0 context:(id)a1;
- (id)viewForShowing;
- (double)contentBottomX;
- (void)collapseWithContext:(id)a0;
- (void)expendWithContext:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void)reloadWithContext:(id)a0;

@end
