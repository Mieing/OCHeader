@class NSString;

@interface AWESearchPitayaBillDetailPreloader : NSObject <AWESearchCommonPreloaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeObjectForKey:(id)a0;
+ (BOOL)isInhouseGeckoEnv;
+ (id)tradeConfirmConfig;

- (void)requestWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInputValidWithParams:(id)a0;
- (id)requiredInputParams;
- (id)transformBizParamsFromInputParams:(id)a0;
- (void)preloadBillWithMainUrl:(id)a0;

@end
