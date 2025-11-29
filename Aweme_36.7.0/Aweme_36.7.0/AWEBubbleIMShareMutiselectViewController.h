@class UIViewController, NSString, UIView, UIButton;
@protocol AWEPadBubbleViewProtocol;

@interface AWEBubbleIMShareMutiselectViewController : AWEIMShareMutiselectViewController <AWEPadUIAdaptionViewTransitionObserver>

@property (weak, nonatomic) UIView<AWEPadBubbleViewProtocol> *sharePanleContainer;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIView<AWEPadBubbleViewProtocol> *shapView;
@property (weak, nonatomic) UIButton *shareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)aAWEPadModuleAdapter;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)doShareViewDownAnimationWithDuration:(double)a0;
- (void)doShareViewUpAnimationWithDuration:(double)a0;
- (void)updateIMMutiSelectView;
- (id)initWithMutiselectViewControllerConfig:(id)a0 sharePanelContainer:(id)a1;
- (id)initWithShareContext:(id)a0 shareModels:(id)a1 dataSource:(id)a2 isBGColorWhite:(BOOL)a3 titleAttributedText:(id)a4 hasMore:(BOOL)a5 sharePanleContainer:(id)a6;
- (void).cxx_destruct;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;
- (void)dealloc;

@end
