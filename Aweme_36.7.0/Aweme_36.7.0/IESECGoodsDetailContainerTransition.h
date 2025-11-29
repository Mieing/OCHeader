@class IESECGoodsDetailHeader, NSString, IESECommerceServiceProvider, UIView, UIViewController;
@protocol IESECGoodsDetailContentProtocol, IESECPDPNavBarService, IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailContainerTransition : NSObject <UINavigationControllerDelegate>

@property (nonatomic) BOOL isGesturePop;
@property (nonatomic) struct CGPoint { double x; double y; } panGestureStartPoint;
@property (nonatomic) BOOL isGestureReverse;
@property (weak, nonatomic) id<IESECPDPNavBarService> navBar;
@property (weak, nonatomic) UIViewController<IESECGoodsDetailContainerProtocol> *currentContainerVC;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailContentProtocol> *previousViewController;
@property (retain, nonatomic) UIViewController<IESECGoodsDetailContentProtocol> *nextViewController;
@property (retain, nonatomic) IESECGoodsDetailHeader *headerView;
@property (weak, nonatomic) IESECommerceServiceProvider *serviceProvider;
@property (retain, nonatomic) UIView *contentViewOfTransition;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *animationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChildViewController;
- (void)popTransitionResultWithGesture:(id)a0;
- (void)pushTransition;
- (void)popTransition;
- (void)popTransitionWithGesture:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;

@end
