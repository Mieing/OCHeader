@class UIButton, NSString, UIView;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavBackItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) UIView *backItemView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *navBackButton;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)backBtnClicked:(id)a0;
- (id)profileContext;
- (id)padService;
- (id)navigationItemView;
- (BOOL)disableProfileScrollingAlphaChange;
- (void)onNavigationStickToTop:(BOOL)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;

@end
