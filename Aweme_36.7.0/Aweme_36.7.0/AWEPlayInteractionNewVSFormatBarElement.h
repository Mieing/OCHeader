@class AWEPlayInteractionVSFormatBarView;

@interface AWEPlayInteractionNewVSFormatBarElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEPlayInteractionVSFormatBarView *barView;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (BOOL)shouldShowVSFormatBarView:(id)a0;
- (void)updateBarView;
- (void)trackBottomBarShow;
- (void)vsVideoPreload;
- (id)vsSchema;
- (BOOL)popupCurrentTopVCIfNeededWhenEnterUserProfile;
- (void)trackBottomBarClicked;
- (BOOL)isGuideComponent;
- (void)barTapped;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
