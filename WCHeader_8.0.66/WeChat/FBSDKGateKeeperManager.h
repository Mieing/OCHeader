@interface FBSDKGateKeeperManager : NSObject

+ (BOOL)boolForKey:(id)a0 appID:(id)a1 defaultValue:(BOOL)a2;
+ (void)loadGateKeepers;
+ (id)requestToLoadGateKeepers:(id)a0;
+ (void)processLoadRequestResponse:(id)a0 error:(id)a1 appID:(id)a2;
+ (BOOL)_gateKeeperTimestampIsValid:(id)a0;
+ (BOOL)_gateKeeperIsValid;

@end
