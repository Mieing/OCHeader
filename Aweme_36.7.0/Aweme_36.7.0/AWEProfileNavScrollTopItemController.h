@class DUXPopover, NSString, UIView, UIButton;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavScrollTopItemController : NSObject <AWEProfileNavigationItemControllerProtocol, AWEScrollTopItemControllerProtocol>

@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) UIButton *scrollTopButton;
@property (retain, nonatomic) DUXPopover *scrollTopGuidePopover;
@property (nonatomic) BOOL needShow;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)profileContext;
- (void)showScrollTopButton;
- (BOOL)currentShowState;
- (void)hideScrollTopGuidePopover;
- (void)hideScrollTopButton;
- (void)showScrollTopGuidePopover;
- (id)navigationItemView;
- (BOOL)disableProfileScrollingAlphaChange;
- (id)scrollToTopComponent;
- (id)postworkDetailComponent;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
