@interface AWEECommerceUtils : NSObject

+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radiusList:(id)a1;
+ (id)formatTenthousandCount:(long long)a0;
+ (id)imageMetaDataFromPath:(id)a0;
+ (BOOL)isGoodsCacheExpiredWithLastStoreTime:(double)a0 cacheLimit:(double)a1;
+ (BOOL)isToutiao:(long long)a0;
+ (long long)indexOfPromotionID:(id)a0 inGoodsList:(id)a1;
+ (BOOL)isRelatedToAweme:(id)a0;
+ (BOOL)isStatusOnSale:(long long)a0;
+ (BOOL)isTaobao:(long long)a0;
+ (id)toutiaoPromotionSources;
+ (void)tranferToURLString:(id)a0;
+ (double)acquireAccurateActivityTime:(double)a0 serverTime:(double)a1;

@end
