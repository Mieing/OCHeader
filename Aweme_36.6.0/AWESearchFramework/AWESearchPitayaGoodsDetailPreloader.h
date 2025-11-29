@class NSArray, NSString;

@interface AWESearchPitayaGoodsDetailPreloader : NSObject <AWESearchCommonPreloaderProtocol>

@property (readonly, copy, nonatomic) NSArray *requiredTrackerKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInputValidWithParams:(id)a0;
- (id)requiredInputParams;
- (id)transformBizParamsFromInputParams:(id)a0;
- (BOOL)hitCacheWithBizParams:(id)a0;

@end
