@class NSString;

@interface WWKFContactOpLogic : MMObject <PBMessageObserverDelegate>

@property (copy, nonatomic) NSString *key;

- (id)init;
- (void)dealloc;
- (void)fetchWWKFContactWithUserName:(id)a0 scene:(int)a1 onSuccess:(id /* block */)a2 onFail:(id /* block */)a3;
- (void)fetchWWKFContactWithUrl:(id)a0 scene:(int)a1 spamContext:(id)a2 finderContext:(id)a3 onSuccess:(id /* block */)a4 onFail:(id /* block */)a5;
- (id)clientStatusForUserName:(id)a0;
- (void)fetchWWKFContactFromSvr:(id)a0 clientStatus:(id)a1 scene:(int)a2 spamContext:(id)a3 finderContext:(id)a4 completeBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)onFetchWWKFContactFromSvr:(id)a0;
- (void)requestBindWWKFContact:(id)a0 url:(id)a1 shareTicket:(id)a2 notifyCtx:(id)a3 spamContext:(id)a4 finderContext:(id)a5 completeBlock:(id /* block */)a6;
- (void)onSyncContactAddOperationToSvr:(id)a0;
- (void)requestUnBindWWKFContactWithUserName:(id)a0 completeBlock:(id /* block */)a1;
- (void)onSyncContactDeleteOperationToSvr:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
