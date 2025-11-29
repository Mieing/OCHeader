@class NSString, UIViewController, AWEPageContext;
@protocol AWEAwemeBizPlayVideoProtocol, AWEPlayInteractionViewControllerProtocol, AWEBDXPopupShrinkVideoHelperDelegate, AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEBDXPopupShrinkVideoHelper : NSObject <BDXHostNavigationProtocol, BDXPopupEventProtocol, UINavigationControllerDelegate, AWEBDXPopupShrinkVideoHelper>

@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol> videoController;
@property (copy, nonatomic) id /* block */ canShrinkBlock;
@property (retain, nonatomic) AWEPageContext *context;
@property (nonatomic) BOOL videoHasShrinked;
@property (nonatomic) BOOL originVideoIsPlaying;
@property (nonatomic) BOOL schemaRequireShrink;
@property (weak, nonatomic) UIViewController *popupContainer;
@property (nonatomic) long long popupStatus;
@property (nonatomic) double originPopupHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEBDXPopupShrinkVideoHelperDelegate> delegate;

+ (BOOL)disableInactiveResume;

- (BOOL)transferToURLString:(id)a0;
- (void)shrinkVideoWhenShowPanel:(BOOL)a0 targetHeight:(double)a1;
- (BOOL)canOpenURLString:(id)a0;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)bdxPushViewController:(id)a0 animated:(BOOL)a1;
- (void)bdxPresentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)xBridgeMethodInstances;
- (void)popup:(id)a0 willChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDuration:(double)a3;
- (void)popup:(id)a0 didDragTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (void)popupDidChangeToStatus:(long long)a0 withContainer:(id)a1;
- (BOOL)canShrink;
- (void)setupWithInteractionController:(id)a0;
- (void)resetSessionState:(id)a0;
- (void)tryResumeVideoPlayer:(id *)a0;
- (void)popupWillShowWithTargetHeight:(id)a0;
- (void)tryPauseVideoPlayer;
- (void)tryResumeVideoPlayer;
- (void)popupWillDismiss;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;

@end
