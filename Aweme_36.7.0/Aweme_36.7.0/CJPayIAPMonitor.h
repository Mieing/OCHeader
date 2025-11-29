@class NSString;

@interface CJPayIAPMonitor : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) long long createBizOrderRetryCount;
@property (nonatomic) long long sendTransactionRetryCount;
@property (copy, nonatomic) NSString *businessIdentify;
@property (nonatomic) BOOL useProductCache;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *iapType;

- (void)monitorService:(id)a0 category:(id)a1 extra:(id)a2;
- (void)monitor:(unsigned long long)a0 category:(id)a1 extra:(id)a2;
- (void)p_monitorWakeUpWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorRequestProductsWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorCreateBizOrderWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorStartPaymentWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorReceiveTransactionWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorVerifyTransactionWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorCallbackResultWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorStagesCostTimeWithCategory:(id)a0 extra:(id)a1;
- (void)p_monitorInitWithCategory:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
