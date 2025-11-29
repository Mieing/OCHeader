@class NSString, NSMutableDictionary, NSObject;
@protocol EcsCardInfoCacheStrategy, OS_dispatch_queue;

@interface EcsCardMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSObject<EcsCardInfoCacheStrategy> *cacheStragegy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestTaskHandleQueue;
@property (retain, nonatomic) NSMutableDictionary *runningTaskList;
@property (retain, nonatomic) NSMutableDictionary *pendingTaskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setCacheStrategy:(id)a0;
- (BOOL)enableCache:(unsigned int)a0;
- (BOOL)needPreload:(unsigned int)a0;
- (void)openProductCard:(id)a0 ofViewModel:(id)a1 withContact:(id)a2 fromVC:(id)a3 withScene:(int)a4;
- (void)fetchProductCard:(id)a0 reqType:(unsigned int)a1 ignoreCache:(BOOL)a2 successCallback:(id /* block */)a3 failedCallback:(id /* block */)a4;
- (void)executeRequestProductTask:(id)a0;
- (void)fetchProductCardWithMessageWrap:(id)a0 success:(id /* block */)a1 failed:(id /* block */)a2;
- (id)getProductCardFromCache:(id)a0 reqType:(unsigned int)a1;
- (id)getValidProductCardFromCache:(id)a0 reqType:(unsigned int)a1;
- (id)buildShareItemWithFinderShareTask:(id)a0 productInfo:(id)a1;
- (id)getLimitDiscountInfoOfProductCard:(id)a0;
- (id)coverEcShoBoxItems2FinderShowBoxItems:(id)a0;
- (void)openShopWindowCardWithMessage:(id)a0 scneNoteCardType:(id)a1 withContact:(id)a2 fromVC:(id)a3 withScene:(int)a4;
- (void)fetchShopCard:(id)a0 reqType:(unsigned int)a1 ignoreCache:(BOOL)a2 successCallback:(id /* block */)a3 failedCallback:(id /* block */)a4;
- (void)executeRequestShopCardTask:(id)a0;
- (id)getShopCardFromCache:(id)a0 reqType:(unsigned int)a1;
- (id)getValidShopCardFromCache:(id)a0 reqType:(unsigned int)a1;
- (id)buildShopShareItemWithShopCardResp:(id)a0;
- (unsigned int)getCardReqTypeWithMessage:(id)a0 isClick:(BOOL)a1;
- (void)fetchAndPreloadBulkBuyCardJumpInfo:(id)a0 successCallback:(id /* block */)a1 failedCallback:(id /* block */)a2;
- (void)executeRequestBulkBuyCard:(id)a0;
- (BOOL)ecsHandleOpenBulkBuyCard:(id)a0 withContact:(id)a1 viewController:(id)a2;
- (id)getValidBulkBuyCardJumpInfoFromCache:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleFetchProductResponse:(id)a0;
- (void)handleFinishProductTask:(id)a0;
- (void)handleFetchShopCardResponse:(id)a0;
- (void)handleFinishShopTask:(id)a0;
- (void)handleFetchWaAppCardResponse:(id)a0;
- (void)handleFinishWaAppCardTask:(id)a0;
- (void).cxx_destruct;

@end
