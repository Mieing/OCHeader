@class MJToolbarButton, NSMutableArray, UIImpactFeedbackGenerator;
@protocol MJShootSideToolbarDelegate;

@interface MJShootSideToolbar : MMUIView

@property (retain, nonatomic) MJToolbarButton *switchCameraButton;
@property (retain, nonatomic) MJToolbarButton *flashButton;
@property (retain, nonatomic) MJToolbarButton *visageButton;
@property (retain, nonatomic) MJToolbarButton *captionButton;
@property (retain, nonatomic) MJToolbarButton *countdownTimerButton;
@property (retain, nonatomic) MJToolbarButton *recordingTimerButton;
@property (retain, nonatomic) MJToolbarButton *switchGenderButton;
@property (retain, nonatomic) MJToolbarButton *replayButton;
@property (retain, nonatomic) MJToolbarButton *backgroundButton;
@property (retain, nonatomic) NSMutableArray *showingButtons;
@property (nonatomic) BOOL isCaptionEnabledByConfig;
@property (nonatomic) BOOL isCountdownTimerEnabledByConfig;
@property (nonatomic) BOOL isRecordingTimerEnabledByConfig;
@property (nonatomic) BOOL isTemplatePanelShowing;
@property (nonatomic) BOOL isTemplateShooting;
@property (nonatomic) BOOL isCurrentAIGCTemplateShooting;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (readonly, nonatomic) BOOL isBackgroundOn;
@property (readonly, nonatomic) BOOL isDuetShootOn;
@property (readonly, nonatomic) BOOL isCaptionOn;
@property (nonatomic) BOOL isCaptionButtonEnabledShowing;
@property (weak, nonatomic) id<MJShootSideToolbarDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)calcToolBarWidth;
- (void)visageButtonDidTouchUpInside:(id)a0;
- (void)switchGenderButtonDidTouchUpInside:(id)a0;
- (void)switchCountdownButtonDidTouchUpInside:(id)a0;
- (void)switchRecordingTimerButtonDidTouchUpInside:(id)a0;
- (void)switchCameraButtonDidTouchUpInside:(id)a0;
- (void)replayButtonDidTouchUpInside:(id)a0;
- (void)flashButtonDidTouchUpInside:(id)a0;
- (void)captionButtonDidTouchUpInside:(id)a0;
- (void)backgroundButtonDidTouchUpInside:(id)a0;
- (void)updateForTemplateShooting;
- (void)updateForNormalShooting;
- (void)updateForTemplatePanelShowing;
- (void)updateForTemplatePanelDismissing;
- (void)updateForVisagePanelShowing;
- (void)updateForVisagePanelDismissing;
- (void)updateCountdownTimerButtonStyleWithMode:(unsigned long long)a0;
- (void)updateRecordingTimerButtonStyleWithMode:(unsigned long long)a0;
- (void)updateFillInlightButtonStyleWithMode:(unsigned long long)a0;
- (void)updateCaptionButtonStateWithIsCaptionOn:(BOOL)a0;
- (void)toggleCaptionButton;
- (void)updateWithIsCurrentAIGCTemplateShooting:(BOOL)a0;
- (void)updateShowingButtonsWithTemplateShootingMode:(BOOL)a0;
- (void)notifyButtonStatusIfNeeded;
- (id)showingButtonsForTemplateShooting;
- (id)showingButtonsForNormalShooting;
- (void).cxx_destruct;

@end
