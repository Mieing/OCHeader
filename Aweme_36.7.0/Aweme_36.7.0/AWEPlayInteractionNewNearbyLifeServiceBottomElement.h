@class AWENearbyBottombarView;

@interface AWEPlayInteractionNewNearbyLifeServiceBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWENearbyBottombarView *barView;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (id)__trackParams;
- (void)__showTrack;
- (void)__handleBroadCastNotifiction:(id)a0;
- (BOOL)__shouldShowWithModel:(id)a0;
- (void)__clickTrack;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapHandler:(id)a0;

@end
