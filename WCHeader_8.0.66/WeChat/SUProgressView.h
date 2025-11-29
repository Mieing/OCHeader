@interface SUProgressView : UIProgressView {
    float _currentPhaseTotalLength;
    float _currentPhaseDoneLength;
    float _currentPhasePercentage;
    float _currentPhaseBaseProgress;
}

- (void)newPhaseWithTotalLength:(float)a0 progressPercentage:(float)a1;
- (void)accumulateDoneLength:(float)a0;

@end
