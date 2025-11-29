@interface IESLivePaidLinkmicAPI : HTSLiveApi

- (void)paidLinkmicAddPriceWithParams:(id)a0 completion:(id /* block */)a1;
- (void)paidLinkmicGetAlertInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)updatePaidQueueSettingWithRoomID:(id)a0 open:(BOOL)a1 completion:(id /* block */)a2;
- (void)getPlayCardInfoWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)getPaidLinkMicBenefitInfoWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)getPlayModeInfoBeforeApplyWithRoomID:(id)a0 completion:(id /* block */)a1;
- (id)paidLinkMicApiRequestByPath:(id)a0 callback:(id /* block */)a1;

@end
