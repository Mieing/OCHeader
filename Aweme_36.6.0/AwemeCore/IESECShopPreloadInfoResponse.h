@class IESECShopPreloadShopInfo, IESECShopTabModel;

@interface IESECShopPreloadInfoResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECShopPreloadShopInfo *shopInfo;
@property (retain, nonatomic) IESECShopTabModel *tabInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
