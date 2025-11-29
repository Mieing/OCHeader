@class NSString, NSDictionary;

@interface IESECShopCardPackProductModel : MTLModel <MTLJSONSerializing, IESECShopProductInfoProtocol>

@property (copy, nonatomic) NSString *cartCtrl;
@property (readonly, copy, nonatomic) NSString *productId;
@property (readonly, copy, nonatomic) NSString *promotionId;
@property (readonly, nonatomic) long long promotionSource;
@property (readonly, copy, nonatomic) NSString *detailURL;
@property (readonly, copy, nonatomic) NSString *videoId;
@property (readonly, copy, nonatomic) NSString *coverImage;
@property (readonly, nonatomic) long long skuType;
@property (readonly, nonatomic) BOOL showCart;
@property (readonly, copy, nonatomic) NSString *cartExtraParams;
@property (readonly, copy, nonatomic) NSString *cartClickToast;
@property (readonly, copy, nonatomic) NSDictionary *tagEventParam;
@property (readonly, copy, nonatomic) NSDictionary *logExtra;
@property (readonly, copy, nonatomic) NSDictionary *bizExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long productIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
