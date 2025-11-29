@class NSString, MMFinderLiveECShopWindowShareLogic, MMFinderLiveECProductShareLogic;

@interface MMFinderLiveECShareManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMFinderLiveECProductShareLogic *productShareLogic;
@property (retain, nonatomic) MMFinderLiveECShopWindowShareLogic *shopWindowShareLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onLiveECShareWithShareTask:(id)a0;
- (void)getShopDisplayWindowCard:(id)a0 isMpChat:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
