@class YataEventChainExpression, NSString;
@protocol YataInstanceInnerInterface;

@interface YataEventChainServiceProvider : NSObject <EventChainServiceProvider>

@property (weak, nonatomic) id<YataInstanceInnerInterface> yata;
@property (retain, nonatomic) YataEventChainExpression *expression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)toast:(id)a0;
- (void)openSchema:(id)a0 BTMID:(id)a1 BCMParams:(id)a2 passthrough:(id)a3;
- (void)openSchema:(id)a0 BTMChain:(id)a1 BCMUnitParams:(id)a2 passthrough:(id)a3;
- (void)trackerWithName:(id)a0 params:(id)a1;
- (void)requestWithAPIPath:(id)a0 query:(id)a1 body:(id)a2 method:(id)a3 format:(id)a4 headers:(id)a5 completion:(id /* block */)a6;
- (id)applyPatches:(id)a0 JSONObject:(id)a1 errorClosure:(id /* block */)a2;
- (id)initWithYataInstance:(id)a0;
- (void).cxx_destruct;

@end
