@interface WCPayGetPayCardListLogic : WCPayControlLogic

@property (nonatomic) int scene;

- (void)startLogic;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (void)OnGetLocalPayCardList:(id)a0 UsrVerifiedInfo:(id)a1 SwicthInfo:(id)a2 BalanceInfo:(id)a3 NoticeInfo:(id)a4 loanEntryInfo:(id)a5 LqtInfo:(id)a6;

@end
