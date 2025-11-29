@class DUXNavigationBar, AWEPOILynxContainerView, NSString, AWEPOITouchThroughView, AWEGradientView, POIMediaListPageContext, UIViewController;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListDefaultLynxHeaderContainer : NSObject <AWEPOICubeViewDelegate, POIMediaListStickyContainerProtocol>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) AWEPOITouchThroughView *containerView;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;

- (void)initializeExtension;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)backButtonPress;
- (void)videoCell:(id)a0 didUpdateWithModel:(id)a1;
- (void)updateWithContainerModel:(id)a0 currentMediaModel:(id)a1;
- (id)cubeManager;
- (void)handleLynxHeaderView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)preferredHeight;
- (void)dealloc;

@end
