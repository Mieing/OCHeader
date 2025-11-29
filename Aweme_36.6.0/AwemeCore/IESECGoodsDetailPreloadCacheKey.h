@class NSString;

@interface IESECGoodsDetailPreloadCacheKey : NSObject

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *scene;

- (id)initWithProductId:(id)a0 promotionId:(id)a1 scene:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
