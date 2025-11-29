@class NSString, UIView;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNaviPadEnterFullScreenItemController : NSObject <AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) UIView *enterFullScreenView;
@property (retain, nonatomic) UIView *navEnterFullScreenView;
@property (nonatomic) BOOL isStickToTop;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)profileContext;
- (id)padService;
- (id)navigationItemView;
- (BOOL)disableProfileScrollingAlphaChange;
- (void)onNavigationStickToTop:(BOOL)a0;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)enterFullScreen;

@end
