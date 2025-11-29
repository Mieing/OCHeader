@class AWEShareSchemaGoodsModel, NSString, AWEShareEcomActivityInfoModel, AWEECSharePanelInfo, AWEECShareBenefitInfo, NSDictionary, AWEShareShopGuideInfo, AWEShareSpikeGoodsModel, AWEECShareReflowDialogInfoModel, NSNumber;

@interface AWEShareSpikeGoodsDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEShareSpikeGoodsModel *product;
@property (retain, nonatomic) NSNumber *returnPage;
@property (retain, nonatomic) NSNumber *page;
@property (copy, nonatomic) NSDictionary *logInfoMap;
@property (retain, nonatomic) AWEShareShopGuideInfo *shopGuideInfo;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *dialogInfo;
@property (retain, nonatomic) AWEShareEcomActivityInfoModel *ecomActivity;
@property (copy, nonatomic) NSString *bcmShareId;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *posterInfo;
@property (retain, nonatomic) AWEECShareReflowDialogInfoModel *qrLynxInfo;
@property (copy, nonatomic) NSString *shareExtraInfo;
@property (retain, nonatomic) AWEECSharePanelInfo *panelInfo;
@property (retain, nonatomic) AWEECShareBenefitInfo *benefitInfo;
@property (copy, nonatomic) NSString *shareId;
@property (retain, nonatomic) AWEShareSchemaGoodsModel *goods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsJSONTransformer;
+ (id)productJSONTransformer;
+ (id)shopGuideInfoJSONTransformer;
+ (id)dialogInfoJSONTransformer;
+ (id)ecomActivityJSONTransformer;
+ (id)posterInfoJSONTransformer;
+ (id)qrLynxInfoJSONTransformer;
+ (id)panelInfoJSONTransformer;
+ (id)benefitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
