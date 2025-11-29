@class NSString;

@interface WCPayReporter : MMUserService <MMServiceProtocol, ClickStatSwizzleExt>

@property (nonatomic) BOOL switchEnabled;
@property (nonatomic) unsigned long long pendingLogicCount;
@property (nonatomic) unsigned long long pendingVCCount;
@property (nonatomic) BOOL sessionStartedFromVC;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int sequenceId;
@property (retain, nonatomic) NSString *lastReportUrl;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportStartLogic:(id)a0;
- (void)reportEndLogic:(id)a0;
- (void)reportDefaultBeginLogic;
- (void)reportDefaultEndLogic;
- (void)reportShowVC:(id)a0;
- (void)reportDismissVC:(id)a0;
- (void)reportShowWebOrWeAppVCWithUrl:(id)a0;
- (void)reportDismissWebOrWeAppVCWithUrl:(id)a0;
- (void)reportStartCgi:(id)a0;
- (void)reportEndCgi:(id)a0;
- (void)reportStartCgiWrap:(id)a0;
- (void)reportEndCgiWrap:(id)a0;
- (void)reportShowDialog:(id)a0;
- (void)reportClickDialogButton:(id)a0;
- (void)reportSystemEvent:(unsigned long long)a0 extInfo:(id)a1;
- (void)reportClickView:(id)a0 reportInfo:(id)a1;
- (void)doReport:(struct WCPayReportLog { unsigned long long x0; unsigned long long x1; char *x2; })a0 extInfo:(id)a1;
- (id)currentSessionId;
- (BOOL)isInReportContext;
- (id)getSessionId;
- (id)commitLogUrl:(id)a0;
- (id)formatExtInfo:(id)a0;
- (void)resetReportDataIfNeeded;
- (BOOL)isViewFromKinda:(id)a0;
- (BOOL)shouldIgnoreButtonEvent:(id)a0;
- (void)onSendEvent:(id)a0;
- (void)onSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;
- (void)MMUIViewControllerDidBePushOrPresent:(id)a0;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)a0;
- (void).cxx_destruct;

@end
