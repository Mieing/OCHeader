@class NSMutableDictionary;

@interface IESECLiveSkuCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *skuCache;

+ (void)clearAllSkuCache;
+ (id)selectIDsForPromotionID:(id)a0;
+ (void)setSelectIDs:(id)a0 forPromotionID:(id)a1;
+ (id)shared;

- (void).cxx_destruct;

@end
