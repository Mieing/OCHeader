@class UIView, UILongPressGestureRecognizer, AWESearchHomePageInspirationViewController, UITapGestureRecognizer, AWESearchHomeKnowledgeBottomBarRootView, AWEAwemeModel, NSString, AWESearchHomeNewStyleSearchBarController, UIScrollView;

@interface AWESearchHomeKnowledgeBottomBarController : NSObject <AWESearchHomePageInspirationProtocol, AWESearchHomeNewStyleSearchBarControllerDelegate, UIGestureRecognizerDelegate, AWESearchHomeKnowledgeBottomBarProtocol>

@property (retain, nonatomic) AWESearchHomePageInspirationViewController *inspirationVC;
@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarController *searchBarController;
@property (retain, nonatomic) AWESearchHomeKnowledgeBottomBarRootView *inspirationRootView;
@property (retain, nonatomic) UIView *tapBlockView;
@property (retain, nonatomic) UIView *navBar;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UILongPressGestureRecognizer *outsideEndSpy;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)updateForAweme:(id)a0;
- (void)passInspirationWithScrollView:(id)a0 navBar:(id)a1;
- (void)showInspirationInContainer:(id)a0;
- (void)hideInspiration;
- (void)inspirationTouchBeginWithAweme:(id)a0;
- (void)InspirationTouchEnd;
- (void)setupNotification;
- (void)handleTapGes:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)searchBarSendQuery:(id)a0;
- (void)container:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandInDuration:(double)a1 withKeyboard:(double)a2;
- (void)buildInspirationRootHierarchy;
- (void)handleSearchKeywordDidChangedNotification:(id)a0;
- (void)addOutsideEndSpyIfNeeded;
- (void)startBlockSingleTap;
- (void)removeOutsideEndSpyIfNeeded;
- (void)stopBlockSingleTap;
- (void)recordInspirationTouchBegin;
- (void)recordInspirationTouchEnd;
- (void)updateTouchBeginTime;
- (void)updateTouchEndTime;
- (void)onWindowPress:(id)a0;
- (void)p_handleSearchFromInspirationWithParams:(id)a0;
- (void)p_requestLoginActionWithCompletion:(id /* block */)a0;
- (void)p_sendSearchWithInspirationParams:(id)a0;
- (BOOL)enableSSEAISearch;
- (void)dismissInspiration;
- (void)dismissInspirationWithParams:(id)a0;
- (void)updateInspirationViewFrame:(struct CGSize { double x0; double x1; })a0;
- (void)searchBarControllerInspiration;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dealloc;

@end
