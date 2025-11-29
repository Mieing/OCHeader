@interface BDSCVideoActionView : UIView

@property (nonatomic) BOOL continuousPlay;
@property (copy, nonatomic) id /* block */ changeClarityBlock;
@property (copy, nonatomic) id /* block */ closeCastBlock;
@property (copy, nonatomic) id /* block */ continuePlayChange;
@property (copy, nonatomic) id /* block */ changeDanmakuBlock;
@property (copy, nonatomic) id /* block */ changeSpeedBlock;
@property (copy, nonatomic) id /* block */ changeStretchBlock;
@property (copy, nonatomic) id /* block */ changeSkipHTBlock;
@property (copy, nonatomic) id /* block */ greyModeClickedBlock;

- (void)updatePlayControlMediaInfo:(id)a0;
- (unsigned long long)exposedAdditionActionOptions;
- (id)additionActionValueForType:(unsigned long long)a0;
- (void)updateClarityGreyMode:(BOOL)a0;
- (void)updateClarityTitle:(id)a0;
- (void)updateSpeedTitle:(id)a0;
- (void)updateContinueGreyMode:(BOOL)a0;
- (void)updateCloseGreyMode:(BOOL)a0;
- (void)updateAdditionActionsGreyMode:(BOOL)a0;
- (void)updateBigStyle:(BOOL)a0;
- (void)updateAdditionActionType:(unsigned long long)a0;
- (void)updateDanmakuAvailable:(BOOL)a0 enabled:(BOOL)a1;
- (void)updateAdditionActionOptions:(unsigned long long)a0;
- (void).cxx_destruct;

@end
