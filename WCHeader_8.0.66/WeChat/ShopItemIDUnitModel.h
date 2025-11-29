@interface ShopItemIDUnitModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long itemID;
@property (nonatomic) unsigned int itemType;
@property (readonly, nonatomic) BOOL isProduct;

+ (id)modelWithProductID:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
