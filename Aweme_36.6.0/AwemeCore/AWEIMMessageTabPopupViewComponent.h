@class NSArray, NSString, AWEIMEnterMessageTabAlertEvent, AWEIMComponentManager;
@protocol AWEIMMessageTabNaviBubbleInterface;

@interface AWEIMMessageTabPopupViewComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewInterface, AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) NSArray *popupComponents;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBubbleInterface> naviGuideService;
@property (nonatomic) BOOL blockedBySplash;
@property (nonatomic) BOOL hasShowingDBPopup;
@property (retain, nonatomic) AWEIMEnterMessageTabAlertEvent *event;
@property (nonatomic) BOOL canTrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (BOOL)im_isSplashShowing;
- (BOOL)isSomePopupViewDisplaying;
- (void)somePopupViewDidShown:(id)a0;
- (BOOL)canLimitPopupViewWithComponent:(id)a0;
- (void)p_showPopupViewIfNeeded;
- (void)p_showPopupViewIfNeededFromContinueIndex:(unsigned long long)a0;
- (id)messageTabPopupLimitDict;
- (void)p_didSplashDisappear:(id)a0;
- (void).cxx_destruct;

@end
