@class NSString, NSArray, IESECWinCartsInfoModel, NSDictionary, NSNumber;

@interface IESECWinGoodsListResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *materialTitle;
@property (copy, nonatomic) NSNumber *bottomModuleType;
@property (copy, nonatomic) NSArray *goodsList;
@property (copy, nonatomic) NSArray *sortTypes;
@property (copy, nonatomic) NSArray *selectButtons;
@property (retain, nonatomic) IESECWinCartsInfoModel *cartsInfo;
@property (nonatomic) unsigned long long productTabLayout;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *bottomModuleParams;
@property (copy, nonatomic) NSArray *recommendGoodsList;
@property (copy, nonatomic) NSString *nextPageParams;
@property (copy, nonatomic) NSArray *pickTypes;
@property (copy, nonatomic) NSDictionary *bizExtraDic;
@property (copy, nonatomic) NSDictionary *videoProduct;
@property (copy, nonatomic) NSDictionary *tabProduct;

+ (id)goodsListJSONTransformer;
+ (id)pickTypesJSONTransformer;
+ (id)recommendGoodsListJSONTransformer;
+ (id)goodsTypesJSONTransformer;
+ (id)sortTypesJSONTransformer;
+ (id)selectButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
