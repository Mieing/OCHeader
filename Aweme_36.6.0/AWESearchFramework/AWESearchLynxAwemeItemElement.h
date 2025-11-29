@class NSString;
@protocol SearchDynamicElementStatusDelegate;

@interface AWESearchLynxAwemeItemElement : LynxUI <AWEModernFullscreenTransitionOuterContextProvider, AWESearchLynxElementViewProtocol, SearchDynamicElementProtocol>

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *sessionid;
@property (copy, nonatomic) NSString *anchortype;
@property (nonatomic) double anchormargin;
@property (nonatomic) BOOL enableMagnifyTransition;
@property (nonatomic) BOOL enableShrinkTransition;
@property (nonatomic) BOOL isSingle;
@property (weak, nonatomic) id<SearchDynamicElementStatusDelegate> statusDelegate;
@property (nonatomic) long long transitionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__1552;
+ (id)__lynx_prop_config__1735;
+ (id)__lynx_prop_config__1450;
+ (void)untrackInstance:(id)a0;
+ (void)trackInstance:(id)a0 sessionid:(id)a1;
+ (id)findInstanceWithSessionid:(id)a0 index:(long long)a1 withFallback:(BOOL)a2;
+ (id)findInstancesWithSessionid:(id)a0;
+ (id)__lynx_prop_config__1501;
+ (id)__lynx_prop_config__1623;
+ (id)__lynx_prop_config__1674;
+ (id)__lynx_prop_config__1796;

- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (long long)modernUpdateOffsetDiffWithItem:(id)a0 initialIndex:(long long)a1 originOffset:(long long)a2;
- (BOOL)isMediaSourceCard;
- (BOOL)syncGetSearchInnerFeedBackOptimizeV2;
- (void)sessionid:(id)a0 requestReset:(BOOL)a1;
- (void)anchortype:(id)a0 requestReset:(BOOL)a1;
- (void)anchormargin:(double)a0 requestReset:(BOOL)a1;
- (void)index:(long long)a0 requestReset:(BOOL)a1;
- (id)getLynxElementType;
- (id)transitionContextWithIndex:(unsigned long long)a0;
- (void)scrollToAnchor;
- (void)isSingle:(BOOL)a0 requestReset:(BOOL)a1;
- (void)enableMagnifyTransition:(BOOL)a0 requestReset:(BOOL)a1;
- (void)enableShrinkTransition:(BOOL)a0 requestReset:(BOOL)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (id)transitionContext;
- (id)videoView;
- (void)willMoveToWindow:(id)a0;
- (void)didResignActive;
- (void)dealloc;
- (id)transitionView;
- (id)createView;
- (id)currentTransitionContext;

@end
