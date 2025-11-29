@class NSTimer;

@interface AWEUI_SF_SelectedAlphaButton : AWEUISelectedAlphaButton

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long waitTime;
@property (nonatomic) unsigned long long vcState;
@property (nonatomic) unsigned long long retryIndex;

- (void)updateViewControllerState:(unsigned long long)a0;
- (void)startErrorStateLimiation;
- (long long)p_getWaitTime;
- (void)onTimerFire:(id)a0;
- (void)p_updateTip;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
