@interface WeAppCore.WACDPCommand_CaptureScreenshot : WeAppCore.WACDPCommand_Base {
    void /* unknown type, empty encoding */ preCheckLoadingWaitingTime;
    void /* unknown type, empty encoding */ loadingWaitingTime;
    void /* unknown type, empty encoding */ imageCheckStartTime;
    void /* unknown type, empty encoding */ imageCheckEndTime;
    void /* unknown type, empty encoding */ imageCheckAttemptCount;
    void /* unknown type, empty encoding */ imageCheckProgress;
    void /* unknown type, empty encoding */ transitionStartTime;
    void /* unknown type, empty encoding */ transitionEndTime;
    void /* unknown type, empty encoding */ viewDidAppearStartTime;
    void /* unknown type, empty encoding */ viewDidAppearEndTime;
    void /* unknown type, empty encoding */ initReadyStartTime;
    void /* unknown type, empty encoding */ initReadyEndTime;
    void /* unknown type, empty encoding */ loadingToastStartTime;
    void /* unknown type, empty encoding */ loadingToastEndTime;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ edgeRatioCheckResults;
}

- (void)runCommandWithCompletionHandler:(void (^)(BOOL))a0;
- (id)init;
- (void).cxx_destruct;

@end
