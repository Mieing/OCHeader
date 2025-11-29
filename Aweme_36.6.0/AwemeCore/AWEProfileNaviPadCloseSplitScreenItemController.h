@class NSString, AWEProfileNavigationButton, DUXBaseButton, UIView;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNaviPadCloseSplitScreenItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) DUXBaseButton *navCloseButton;
@property (retain, nonatomic) AWEProfileNavigationButton *closeButton;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)closeButtonDidClicked;
- (id)profileContext;
- (id)padService;
- (id)navigationItemView;
- (BOOL)disableProfileScrollingAlphaChange;
- (void)onNavigationStickToTop:(BOOL)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;

@end
