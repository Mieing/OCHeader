@class BDImageView, NSString, NSDictionary, UIButton;
@protocol AWESplashTransitionManagerDelegate;

@interface AWESplashTransitionManager : HTSService <AWESplashTransitionManager>

@property (retain, nonatomic) BDImageView *imageView;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) long long animationStatus;
@property (retain, nonatomic) UIButton *tipButton;
@property (copy, nonatomic) NSDictionary *framesDic;
@property (weak, nonatomic) id<AWESplashTransitionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimationTransitionWithImage:(id)a0 config:(id)a1;
- (void)onAnimationFailed;
- (void)startPlayTransitionImage;
- (void)onEggClicked;
- (void)transferToTargetFrame;
- (void)sendLogWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
