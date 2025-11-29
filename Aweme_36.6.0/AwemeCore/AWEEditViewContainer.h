@class ACCEditContainerView, NSString, UIView;
@protocol ACCEditBarItemContainerView, ACCPanelViewController, IESServiceProvider, ACCEditProjectListPreviewProtocol, ACCEditTRBarItemContainerView, AEKMediaBlurViewProtocol;

@interface AWEEditViewContainer : NSObject <ACCEditViewContainer, FPViewContainer>

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) id<ACCPanelViewController> panelViewController;
@property (retain, nonatomic) id<ACCEditTRBarItemContainerView> topRightBarItemContainer;
@property (retain, nonatomic) id<ACCEditBarItemContainerView> bottomBarItemContainer;
@property (retain, nonatomic) ACCEditContainerView *containerView;
@property (copy, nonatomic) id /* block */ extraConfigBlock;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) UIView<ACCEditProjectListPreviewProtocol> *bottomPreview;
@property (readonly, nonatomic) UIView *gestureView;
@property (readonly, nonatomic) UIView<AEKMediaBlurViewProtocol> *blurView;
@property (copy, nonatomic) id /* block */ interactionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sensorialRender;
- (void)viewContainerDidLoad;
- (void)addToolBarBarItem:(id)a0;
- (id)viewWithBarItemID:(void *)a0;
- (void)injectTopRightBarItemContainer:(id)a0;
- (void)injectBottomBarItemContainer:(id)a0;
- (void)setupBlurViewIfNeeded;
- (id)sequencePlayerCellAtIndex:(long long)a0;
- (id)sequencePlayerCellsIncludingPlaceholderAtIndex:(long long)a0;
- (void)config:(id)a0;
- (id)initWithRootView:(id)a0;
- (void).cxx_destruct;

@end
