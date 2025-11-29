@class IESECGoodsDetailLiveBanner, NSString;
@protocol IESECPDPActionDispatcherService, IESECPDPContainerService, IESECPDPSectionManagerService;

@interface IESECPDPLiveBannerComponent : IESECPDPBaseComponent <IESECPDPLiveBannerService>

@property (weak, nonatomic) id<IESECPDPContainerService> container;
@property (weak, nonatomic) id<IESECPDPSectionManagerService> sectionManager;
@property (weak, nonatomic) id<IESECPDPActionDispatcherService> dispatcher;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } panStartFrame;
@property (retain, nonatomic) IESECGoodsDetailLiveBanner *liveBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponent;
- (void)showPresentAnimation;
- (BOOL)shouldShowLiveBanner;
- (void)liveBannerShow:(BOOL)a0;
- (void)containerDidRender;
- (void)animateDismiss;
- (void)containerWillReturnGoodsDetailPage;
- (void)containerWillEnterCommentPage;
- (void)beganGesture:(unsigned long long)a0;
- (void)panWithOffsetY:(double)a0 directionUp:(BOOL)a1;
- (void)handlePanGestureWithPercent:(double)a0;
- (void)setupLiveBannerForMode:(long long)a0;
- (void)cancelHalfModePan;
- (void)packApiBack;
- (void)registerSelfService;
- (void)cancelFullModePan;
- (void).cxx_destruct;

@end
