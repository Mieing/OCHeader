@class NSString, NSDictionary;

@interface AWEPayNativeScanPayManager : NSObject <CJPayAPIDelegate>

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *prePayInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)onResponse:(id)a0;
- (void)beforeNativeScanPay;
- (void)p_trackEvent:(id)a0 param:(id)a1;
- (void)handleWithCodeAddressInfoStr:(id)a0;
- (void)afterNativeScanPay;
- (id)getPrepayInfoDicWithAddressStr:(id)a0;
- (void)scanPayWithCodeUrl:(id)a0 token:(id)a1;
- (void).cxx_destruct;

@end
