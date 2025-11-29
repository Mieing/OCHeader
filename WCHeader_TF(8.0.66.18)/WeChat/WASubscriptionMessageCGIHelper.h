@interface WASubscriptionMessageCGIHelper : NSObject

+ (void)sendRequestListByIDCGIWith:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
+ (void)sendRequestSubscribeCGIWith:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
+ (id)errorWithRet:(int)a0 response:(id)a1;
+ (id)errorWithRet:(int)a0 uiMessage:(unsigned int)a1 response:(id)a2;
+ (id)commonErrorCheckWithResponse:(id)a0;
+ (id)generateItemListWith:(id)a0;
+ (id)subscribeStatusWith:(id)a0;

@end
