@class NSString;

@interface FavProductItem : FavoritesModel

@property (retain, nonatomic) NSString *productTitle;
@property (retain, nonatomic) NSString *productDesc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *productInfo;
@property (retain, nonatomic) NSString *productSellerName;
@property (retain, nonatomic) NSString *productUrl;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
