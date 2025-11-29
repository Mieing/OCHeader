@class UIView;
@protocol AWERelatedReadingBottomBarViewProtocol;

@interface AWEPlayInteractionNewTTRelatedReadingElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) UIView<AWERelatedReadingBottomBarViewProtocol> *ttRelatedReadingView;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (BOOL)shouldShowTTRelatedReadingBar:(id)a0;
- (BOOL)showFeedBottomArticleBarSuperiorToHotSearch:(id)a0;
- (BOOL)showFeedBottomArticleBarInferiorToHotSearch:(id)a0;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackOnDisplay:(BOOL)a0;
- (void)updateRelatedReadingView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
