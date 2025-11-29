@class CAGradientLayer, HTSLiveGradientBackgroundView, NSString, IESLiveLandscapePublicScreenView;
@protocol IESLiveLandscapePublicScreenDelegate;

@interface IESLiveLandscapePublicScreenManager : NSObject <IESLiveFIFAPlayerScaleAction, IESLiveMessageInteractionModuleCommentAction>

@property (retain, nonatomic) IESLiveLandscapePublicScreenView *publicScreenView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *giftMaskLayer;
@property (nonatomic) BOOL giftMaskShowing;
@property (weak, nonatomic) id<IESLiveLandscapePublicScreenDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)onFIFAPannelSatusChange:(long long)a0;
- (void)showGiftMask;
- (void)orientationTransitionBegin:(long long)a0;
- (BOOL)giftMaskViewShowing;
- (void)setupPublicScreenView;
- (double)sidePublicScreenWidth;
- (void)updatePublicScreenWidth:(double)a0;
- (void)enableSidePublicScreen:(BOOL)a0;
- (void)hideGiftMask;
- (void)orientationTransitionEnd:(long long)a0;
- (void)enableSidePublicScreen:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupBackgroundView;

@end
