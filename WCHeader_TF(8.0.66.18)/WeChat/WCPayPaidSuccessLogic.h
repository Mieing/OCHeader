@class NSString;

@interface WCPayPaidSuccessLogic : WCPayControlLogic <WCPayOrderDetailHistoryViewControllerDelegate> {
    long long m_eWCPayPaidSuccessLogicWCPaySituationType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPayPaidSuccessLogicSituationType:(long long)a0;
- (void)convertIAPOrderDetailToWCPayOrderDetailStruct;
- (void)startLogic;
- (void)stopLogic;
- (void)OnHistoryOrderDetailBack:(BOOL)a0;
- (void)OnHistoryOrderDetailRightActionBack:(BOOL)a0;
- (void)OnClickedBrandAppUserName:(id)a0 NickName:(id)a1;
- (void)OnSelectedSuccessBtnDown;

@end
