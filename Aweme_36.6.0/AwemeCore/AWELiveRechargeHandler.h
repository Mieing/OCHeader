@class NSString;
@protocol IESLiveChargeMonitorDelegate;

@interface AWELiveRechargeHandler : NSObject <AWERechargeCenterDelegate, IESLiveRechargeHandleService>

@property (retain, nonatomic) id<IESLiveChargeMonitorDelegate> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onLineFontWithName:(id)a0 size:(double)a1;
- (void)buyWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)openDYYapDeskWithOrderParams:(id)a0 completion:(id /* block */)a1;
- (id)cjPayVersion;
- (void)preFetchProducts:(id)a0 completion:(id /* block */)a1;
- (void)addMonitor:(id)a0 forBusiness:(id)a1;
- (void)checkUnverifiedTransaction;
- (BOOL)shouldHandleTransactionOfProduct:(id)a0;
- (void)awe_cjDidFinishProductOrder:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;

@end
