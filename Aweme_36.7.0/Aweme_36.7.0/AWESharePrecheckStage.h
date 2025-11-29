@interface AWESharePrecheckStage : AWEShareBaseStage

- (BOOL)prepareBeforeRun;
- (BOOL)precheckYouthControl;
- (BOOL)isChannelDisabledInYouthControl;
- (id)youthControlToastText;
- (void)run;

@end
