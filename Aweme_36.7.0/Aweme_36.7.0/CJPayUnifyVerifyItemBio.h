@interface CJPayUnifyVerifyItemBio : CJPayUnifyBaseVerifyItem

- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_switchToPasswordVerifyWithDegradeReason:(id)a0;
- (id)p_codeToDegradeReasonMap;
- (void)p_startOTPVerifyWithBioType:(id)a0 token:(id)a1 serialNum:(id)a2;
- (id)p_codeToFailMsgMap;
- (void)p_switchToPasswordVerifyWithDegradeReason:(id)a0 reopenMsg:(id)a1;

@end
