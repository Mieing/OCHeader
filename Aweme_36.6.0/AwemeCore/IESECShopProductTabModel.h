@class IESECListKitListModel, NSArray, IESECShopTabPromotionInfo, NSDictionary, IESECShopBizExtraModel, NSNumber, NSString;

@interface IESECShopProductTabModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopTabPromotionInfo *promotionInfo;
@property (copy, nonatomic) NSArray *sortTypes;
@property (copy, nonatomic) NSArray *pickTypes;
@property (copy, nonatomic) NSDictionary *bizExtraDic;
@property (copy, nonatomic) NSDictionary *extraStatus;
@property (retain, nonatomic) IESECShopBizExtraModel *bizExtra;
@property (copy, nonatomic) NSArray *selectButtons;
@property (copy, nonatomic) NSArray *products;
@property (copy, nonatomic) NSNumber *bottomModuleType;
@property (copy, nonatomic) NSString *bottomModuleParams;
@property (copy, nonatomic) NSString *innerflowSchema;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *productLayout;
@property (copy, nonatomic) NSNumber *forcedProductLayout;
@property (copy, nonatomic) NSDictionary *videoProduct;
@property (copy, nonatomic) NSDictionary *tabProduct;
@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) NSString *hybridParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)pickTypesJSONTransformer;
+ (id)sortTypesJSONTransformer;
+ (id)selectButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
