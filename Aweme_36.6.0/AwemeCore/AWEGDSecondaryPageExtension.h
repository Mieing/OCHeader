@class DitoPageContext, NSString, BDXBridgeEventSubscriber, UIView, UIPanGestureRecognizer;
@protocol DitoExtensionContainerProtocol;

@interface AWEGDSecondaryPageExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) UIView *secondaryPageBodyView;
@property (weak, nonatomic) UIView *secondaryPageHeaderView;
@property (weak, nonatomic) UIView *footerMaskView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *showFooterMaskSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *hideFooterMaskSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *openSecondaryPageSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *closeSecondaryPageSubscriber;
@property (retain, nonatomic) UIPanGestureRecognizer *sideCloseGestureRecognizer;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeSecondaryPageAction;
- (id)createCubeViewWithUrl:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTapFooterMaskView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)handlePanGesture:(id)a0;

@end
