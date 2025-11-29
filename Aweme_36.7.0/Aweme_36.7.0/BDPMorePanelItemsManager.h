@interface BDPMorePanelItemsManager : NSObject

+ (id)customItemsForPanel:(id)a0 uniqueID:(id)a1 originItems:(id)a2;
+ (BOOL)isHostSupportItemsFullCustomWithUniqueID:(id)a0;
+ (void)fixMissingItemsForItems:(id)a0 usingOriginItems:(id)a1;

@end
