@protocol WCMallNetworkHelperDelegate;

@interface WCMallNetworkHelper : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate;

- (id)init;
- (void)dealloc;
- (void)GetWCMallFunctionList:(id)a0;
- (void)GetWCMallPayChargeProxyRequets:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnGetWCMallFunctionListMessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnGetWCMallPayChargeProxyReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
