@class NSString;

@interface WCFinderPromotionShopActionConfig : NSObject

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) long long multiStorePromotion;

- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end
