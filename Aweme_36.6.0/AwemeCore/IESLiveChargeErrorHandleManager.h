@class NSString;

@interface IESLiveChargeErrorHandleManager : NSObject <IESLiveChargeErrorHandleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)chargeFailedWithError:(id)a0 iapModel:(id)a1 source:(id)a2 trackerInfo:(id)a3 retentionAlertCompletion:(id /* block */)a4;
- (void)chargeFailedWithError:(id)a0 source:(id)a1 chargeModel:(id)a2 trackerInfo:(id)a3;
- (void)handleChareError:(id)a0 model:(id)a1 iapModel:(id)a2 trackerInfo:(id)a3 source:(id)a4 retentionCompletion:(id /* block */)a5;
- (BOOL)shouldHandleChargeErrorBySettings:(id)a0;
- (void)handleChargeErrorBySettings:(id)a0 trackerInfo:(id)a1;
- (void)handlerChargeErrorByServer:(id)a0;
- (id)pr_modifyScheme:(id)a0 queryParams:(id)a1;

@end
