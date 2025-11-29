@interface AWEShareTokenStage : AWEShareBaseStage

@property (nonatomic) BOOL shouldRun;

- (BOOL)checkShouldRun;
- (BOOL)prepareBeforeRun;
- (id)jumpAppNameWithShareType:(id)a0;
- (void)openDestinationAppWithShareType:(id)a0;
- (void)makeEventContext;
- (void)jumpWithoutAlert;
- (void)showAlertWithText:(id)a0;
- (void)trackVSEvent:(id)a0 withDict:(id)a1;
- (void)trackTokenShowEvent;
- (void)trackTokenClickEvent;
- (void)trackTokenCancelEvent;
- (void)run;

@end
