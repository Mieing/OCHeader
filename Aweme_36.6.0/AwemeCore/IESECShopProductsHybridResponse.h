@class NSString, NSDictionary, IESECShopBizExtraModel, IESECListKitListModel;

@interface IESECShopProductsHybridResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSString *paginationParams;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) IESECShopBizExtraModel *bizExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
