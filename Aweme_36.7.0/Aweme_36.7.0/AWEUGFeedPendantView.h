@class NSString, AWEUGPendantModel, UIView;
@protocol AWEUGPendantCloseButtonProtocol, AWEUGPendantCapsuleProtocol, AWEUGPendantContentProtocol;

@interface AWEUGFeedPendantView : UIView <AWEUGPendantUIProtocol>

@property (nonatomic) unsigned long long structureState;
@property (retain, nonatomic) UIView<AWEUGPendantContentProtocol> *contentView;
@property (retain, nonatomic) UIView<AWEUGPendantCloseButtonProtocol> *dismissButton;
@property (retain, nonatomic) UIView<AWEUGPendantCapsuleProtocol> *capsuleView;
@property (retain, nonatomic) AWEUGPendantModel *pendantModel;
@property (nonatomic) BOOL hasGestureRecognizer;
@property (copy, nonatomic) id /* block */ contentPlaySuccessfullyHandler;
@property (copy, nonatomic) id /* block */ contentPlayFailedHandler;
@property (copy, nonatomic) id /* block */ contentTapHandler;
@property (copy, nonatomic) id /* block */ closeTapHandler;
@property (copy, nonatomic) id /* block */ bubbleTapHandler;
@property (copy, nonatomic) id /* block */ edgedBubbleTapHandler;
@property (copy, nonatomic) id /* block */ animationFrameHandler;
@property (nonatomic) BOOL isMovingPendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUIWithModel:(id)a0;
- (void)updateUIWithModel:(id)a0;
- (void)setupGestureRecognizer;
- (void)dismissButtonTapped;
- (void)contentTapped;
- (void)playAnimationFromFrame:(id)a0 toFrame:(id)a1 loop:(BOOL)a2 complete:(id /* block */)a3;
- (BOOL)checkDataIfReadyUIWithModel:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (void)setupContentViewWithModel:(id)a0;
- (void)setupCapsuleWithModel:(id)a0;
- (void)setupCloseViewWithModel:(id)a0;
- (void)contentPlaySuccessfully;
- (void)contentPlayFailed;
- (void)checkButtonState:(id)a0;
- (BOOL)feedPendantEnableFold;
- (struct CGPoint { double x0; double x1; })safeAreaForPendant:(id)a0;
- (void)tryAutoFoldPendant;
- (void)tryConsumeGesture;
- (double)heightToRightBottom;
- (double)heightToTop;
- (BOOL)isRightSide;
- (long long)feedPendantFoldType;
- (double)heightToLeftBottom;
- (void)setPendantStructureState:(unsigned long long)a0 animation:(BOOL)a1 complete:(id /* block */)a2;
- (void)playLoopAniamtion;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 complete:(id /* block */)a3;
- (unsigned long long)p_adaptContentState:(unsigned long long)a0;
- (unsigned long long)pendantStructureState;
- (unsigned long long)pendantShowState;
- (void)updateUIWithUIInfo:(id)a0 complete:(id /* block */)a1;
- (void)updateUIWithKey:(id)a0 value:(id)a1 complete:(id /* block */)a2;
- (void)updateUIWithKey:(id)a0 model:(id)a1 complete:(id /* block */)a2;
- (void)willEnterForeground;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)pauseAnimation;
- (void)hide;
- (void)dealloc;
- (void)show;
- (void)handlePanGesture:(id)a0;
- (void)setupNotifications;

@end
