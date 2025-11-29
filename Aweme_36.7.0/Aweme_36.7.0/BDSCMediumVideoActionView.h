@class BDSCLottieButton, BDSCControlButton;

@interface BDSCMediumVideoActionView : BDSCVideoActionView

@property (retain, nonatomic) BDSCControlButton *closeCastButton;
@property (retain, nonatomic) BDSCLottieButton *continuePlayButton;
@property (retain, nonatomic) BDSCControlButton *changeClarityButton;
@property (nonatomic) BOOL isBigStyle;

- (void)setContinuousPlay:(BOOL)a0;
- (BOOL)continuousPlay;
- (void)updateClarityGreyMode:(BOOL)a0;
- (void)updateClarityTitle:(id)a0;
- (void)updateContinueGreyMode:(BOOL)a0;
- (void)updateCloseGreyMode:(BOOL)a0;
- (void)updateBigStyle:(BOOL)a0;
- (void)continuePlayButtonClicked;
- (void)updateAdditionActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (double)buttonWidth;
- (void)setupSubviews;

@end
