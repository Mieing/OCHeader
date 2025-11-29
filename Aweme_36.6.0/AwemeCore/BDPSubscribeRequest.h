@interface BDPSubscribeRequest : NSObject

+ (void)querySubscribeInfoWithUniqueID:(id)a0 templeIds:(id)a1 fullInfo:(BOOL)a2 scene:(id)a3 completion:(id /* block */)a4;
+ (void)requestSubscribeResultWithUniqueID:(id)a0 subscriptions:(id)a1 completion:(id /* block */)a2;

@end
