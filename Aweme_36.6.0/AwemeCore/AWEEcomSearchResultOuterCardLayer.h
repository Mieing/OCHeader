@class NSString, NSArray, AWEEcommerceSearchAladdinInfoModel, AWEEcommerceSearchKiwiInfoModel, AWEDoubleColumnSearchMerchandiseModel;

@interface AWEEcomSearchResultOuterCardLayer : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) AWEEcommerceSearchKiwiInfoModel *kiwiInfo;
@property (retain, nonatomic) AWEEcommerceSearchAladdinInfoModel *aladdinInfo;
@property (retain, nonatomic) NSArray *boxDetection;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *originalProductCard;
@property (copy, nonatomic) NSArray *tabInfo;
@property (copy, nonatomic) NSArray *multiImageQueryList;
@property (copy, nonatomic) NSArray *productPreloadList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionsJSONTransformer;
+ (id)tabInfoJSONTransformer;
+ (id)aladdinInfoJSONTransformer;
+ (id)kiwiInfoJSONTransformer;
+ (id)bannerDataJSONTransformer;
+ (id)multiImageQueryListJSONTransformer;
+ (id)productPreloadListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
