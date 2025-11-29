@class NSString, AWEPOILynxContainerView, AWEPOITouchThroughView, POIMediaListPageContext, UIViewController;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListDefaultLynxFooterContainer : NSObject <AWEPOICubeViewDelegate, POIMediaListStickyContainerProtocol>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) AWEPOITouchThroughView *containerView;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;

- (void)initializeExtension;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)videoCell:(id)a0 didUpdateWithModel:(id)a1;
- (void)updateWithContainerModel:(id)a0 currentMediaModel:(id)a1;
- (BOOL)shouldOverlayBeyondOtherSiblingView;
- (id)cubeManager;
- (void).cxx_destruct;
- (id)init;
- (double)preferredHeight;

@end
