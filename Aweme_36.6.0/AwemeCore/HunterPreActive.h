@interface HunterPreActive : NSObject

+ (void)preActiveGeckoWithPositionType:(id)a0 positionID:(id)a1;
+ (void)reportResult:(id)a0;
+ (BOOL)hasGeckoResourcesForChannel:(id)a0;
+ (void)preActiveNextLynxPageWithCurrentSchema:(id)a0;
+ (void)preActiveGeckoChannel:(id)a0 withAction:(id)a1 forPositionType:(id)a2;
+ (BOOL)hasCalledAction:(id)a0 forChannel:(id)a1;
+ (void)activeChannel:(id)a0;
+ (void)downloadChannel:(id)a0 forPositionType:(id)a1;
+ (id)cacheKeyWithAction:(id)a0 forChannel:(id)a1;
+ (void)reportUsed:(id)a0 forPositionType:(id)a1;

@end
