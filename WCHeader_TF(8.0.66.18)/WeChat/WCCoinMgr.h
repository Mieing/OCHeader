@class WCCoinLogger, NSMutableArray, NSString;

@interface WCCoinMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *logics;
@property (retain, nonatomic) WCCoinLogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)wechatUserShouldAuth;
- (void)startBuyCoinLogic:(id)a0 parameter:(id)a1;
- (void)startSubscribeLogic:(id)a0 CompletionHandler:(id /* block */)a1;
- (void)startConsumeLogic:(id)a0 parameter:(id)a1;
- (void)getWecoinBalance:(id /* block */)a0;
- (void)startEncashLogic:(id)a0 parameter:(id)a1;
- (void)preload;
- (void)preFetchProducts;
- (void)removeLogic:(id)a0;
- (BOOL)showFirstBuyCoinTips:(BOOL)a0;
- (BOOL)showFirstBuyCoinTips:(BOOL)a0 delegate:(id)a1;
- (void)startCloseAuthLogic:(id /* block */)a0;
- (void).cxx_destruct;

@end
