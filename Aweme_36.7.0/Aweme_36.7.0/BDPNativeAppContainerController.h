@class UITapGestureRecognizer, NSString, UIView;

@interface BDPNativeAppContainerController : BDPContainerController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *padBackgroundView;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTapGestureAction:(id)a0;
- (void)adjustAppBackGroundSize:(long long)a0 adjustContent:(BOOL)a1 animated:(BOOL)a2;
- (void)adjustAppBackGroundSizeToFullScreenAnimated:(BOOL)a0;
- (void)applicationLoadSuccessWithUniqueID:(id)a0;
- (double)delayHideLoadingFromDoubleReady;
- (long long)skeletonState;
- (void)setupPadAdapterView;
- (void)setupPadAdapterXScreenGesture;
- (void)setAppBackGroundColor:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
