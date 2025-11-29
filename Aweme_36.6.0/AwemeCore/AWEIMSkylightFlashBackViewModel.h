@interface AWEIMSkylightFlashBackViewModel : AWEIMSkylightBizViewModel

+ (id)p_countRuleWithVMType:(unsigned long long)a0;

- (BOOL)shouldMoveBackToday;
- (BOOL)checkEnableTransferToSchema:(id)a0;
- (void)invokeSelectActionWithCompletion:(id /* block */)a0;
- (void)willDisplayCellWithCanRecordShowTimes:(BOOL)a0;
- (void)transferToFlashBackDetailWithBizModel:(id)a0;

@end
