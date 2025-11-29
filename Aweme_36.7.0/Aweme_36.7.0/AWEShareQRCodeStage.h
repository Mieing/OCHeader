@interface AWEShareQRCodeStage : AWEShareBaseStage

@property (nonatomic) BOOL shouldRun;

- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (void)trackQRCodeVCShowWithBeginTime:(double)a0;
- (void)run;

@end
