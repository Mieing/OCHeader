@class BDSCControlButtonV2;

@interface BDSCUniformVideoActionView : BDSCVideoActionView

@property (retain, nonatomic) BDSCControlButtonV2 *danmakuButton;
@property (retain, nonatomic) BDSCControlButtonV2 *speedButton;
@property (retain, nonatomic) BDSCControlButtonV2 *resolutionButton;
@property (retain, nonatomic) BDSCControlButtonV2 *autoNextButton;
@property (retain, nonatomic) BDSCControlButtonV2 *stretchButton;
@property (retain, nonatomic) BDSCControlButtonV2 *skipHTButton;
@property (nonatomic) BOOL isBigStyle;
@property (nonatomic) BOOL globalGreyMode;
@property (nonatomic) BOOL danmakuAvailable;

- (void)updatePlayControlMediaInfo:(id)a0;
- (unsigned long long)exposedAdditionActionOptions;
- (id)additionActionValueForType:(unsigned long long)a0;
- (void)setContinuousPlay:(BOOL)a0;
- (BOOL)continuousPlay;
- (void)updateClarityTitle:(id)a0;
- (void)updateAdditionActionsGreyMode:(BOOL)a0;
- (void)updateBigStyle:(BOOL)a0;
- (void)updateStretchButtonStatus:(BOOL)a0;
- (void)updateDanmakuAvailable:(BOOL)a0 enabled:(BOOL)a1;
- (void)updateAdditionActionOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (double)buttonWidth;
- (void)setupSubviews;
- (id)allButtons;

@end
