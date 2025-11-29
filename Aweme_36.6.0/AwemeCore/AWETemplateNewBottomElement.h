@class AWEProviderManager, NSString, UIView, NSNumber, AWETemplateBarContext;

@interface AWETemplateNewBottomElement : AWEPlayInteractionNewBottomElement <AWETemplateBarVideoInfoProtocol>

@property (retain, nonatomic) AWEProviderManager *providerManager;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) NSNumber *defaultPriority;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedBottomBarDOUYINHTSAdapterClass;

- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)videoPlayerWillTrackPlayTime;
- (unsigned long long)elementVisibleType;
- (void)handleElementWhenPriorityAvoid:(id)a0;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)configWithParamDict:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (id)aAWEFeedBottomBarDOUYINHTSAdapter;
- (void)setUpStandardClassifyView;
- (void)updateContext:(id)a0 interactionContext:(id)a1;
- (id)videoDuration;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)priority;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (double)currentPlaybackTime;

@end
