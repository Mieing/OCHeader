@class NSString, AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel;

@interface AWEEcommerceSearchBoxBannerSceneInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long bannerSceneType;
@property (copy, nonatomic) NSString *headImgProductId;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterBusinessInfoModel *switchSortParams;
@property (copy, nonatomic) NSString *searchForceInsertInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)switchSortParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)filterTrackParams;
- (void).cxx_destruct;

@end
