@class NSString, UIViewController, UIView;
@protocol ACCStickerPannelAnimationVCDelegate;

@interface ACCStickerPannelAnimationVC : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL needSpacePadding;
@property (weak, nonatomic) id<ACCStickerPannelAnimationVCDelegate> transitionDelegate;
@property (weak, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) UIView *animationView;
@property (nonatomic) double topOffset;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWithCompletion:(id /* block */)a0;
- (void)removeWithoutAnimation;
- (void)showWithoutAnimation;
- (void)showAlphaWithCompletion:(id /* block */)a0;
- (void)removeAlphaWithCompletion:(id /* block */)a0;
- (void)moveToTopOffset:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_willClose;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)showWithCompletion:(id /* block */)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;

@end
