@protocol WCAddressNetworkDelegate;

@interface WCAddressNetworkHelper : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCAddressNetworkDelegate> m_delegate;

- (void)dealloc;
- (void)OnMessageReturnInAddWCAddress:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInAnnlysicInfo:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInQueryWCAddress:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInRemoveWCAddress:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInModifyWCAddress:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInSelectWCAddress:(id)a0 Event:(unsigned int)a1;
- (void)OnMessageReturnInImportYiXunAddress:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)AddWCAddress:(id)a0;
- (void)RemoveWCAddress:(id)a0;
- (void)QueryWCAddress:(id)a0;
- (void)AnalysicAddressInfo:(id)a0;
- (void)ModifyWCAddress:(id)a0;
- (void)SelectWCAddress:(id)a0;
- (void)ImportYiXunAdress:(id)a0;
- (void).cxx_destruct;

@end
