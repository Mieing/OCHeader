@interface BDPInteractionPluginManager : NSObject

+ (void)createInteractionCardWithUniqueID:(id)a0 width:(double)a1 height:(double)a2 completion:(id /* block */)a3;
+ (void)operateInteractionCardWithUniqueID:(id)a0 cardID:(id)a1 extra:(id)a2 operateType:(long long)a3;
+ (void)exitInteractionPluginWithUniqueID:(id)a0;
+ (void)pr_updateCardWithUniqueID:(id)a0 cardID:(id)a1 extra:(id)a2;

@end
