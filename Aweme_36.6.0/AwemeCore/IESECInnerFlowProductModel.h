@class IESECInnerFlowProductActionBarModel, IESECInnerFlowProductPriceModel, NSArray, NSString, IESECInnerFlowProductBaseInfoModel, IESECInnerFlowProductSearchSchemaModel, IESECInnerFlowProductBottomGuideModel, IESECVideoGirdleInfoModel, IESECVideoPriceInfoModel;

@interface IESECInnerFlowProductModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECInnerFlowProductBaseInfoModel *baseInfo;
@property (retain, nonatomic) IESECInnerFlowProductPriceModel *productPrice;
@property (retain, nonatomic) IESECVideoPriceInfoModel *productPriceV2;
@property (copy, nonatomic) NSArray *productTitleTags;
@property (copy, nonatomic) NSArray *subTitleTags;
@property (copy, nonatomic) NSString *sales;
@property (copy, nonatomic) NSString *detailUrl;
@property (copy, nonatomic) NSString *cartUrl;
@property (retain, nonatomic) IESECVideoGirdleInfoModel *girdle;
@property (retain, nonatomic) IESECInnerFlowProductActionBarModel *actionBar;
@property (copy, nonatomic) NSArray *lamps;
@property (retain, nonatomic) IESECInnerFlowProductSearchSchemaModel *searchSchema;
@property (retain, nonatomic) IESECInnerFlowProductBottomGuideModel *bottomGuide;
@property (copy, nonatomic) NSString *standardTrackParam;
@property (copy, nonatomic) NSString *standardMarketingTrackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)campaignJSONTransformer;
+ (id)baseInfoJSONTransformer;
+ (id)lampsJSONTransformer;
+ (id)productPriceJSONTransformer;
+ (id)productPriceV2JSONTransformer;
+ (id)actionBarJSONTransformer;
+ (id)bottomGuideJSONTransformer;
+ (id)searchSchemaJSONTransformer;
+ (id)girdleJSONTransformer;
+ (id)productTitleTagsJSONTransformer;
+ (id)subTitleTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
