@interface AWEAccountSwitchStep : AWEWorkflowStep

- (void)p_dismissViewControllerCompletion:(id /* block */)a0 cancel:(id /* block */)a1 diffUid:(BOOL)a2;
- (void)p_switchToNewUserWithUser:(id)a0;
- (void)p_strategyConductWithPushUserId:(id)a0 afterManualLogin:(BOOL)a1 multiLogin:(BOOL)a2;
- (void)p_editConditionAlertShowWithConfirmBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void)onStep:(id)a0 linkSession:(id)a1;

@end
