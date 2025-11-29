@class AWEPOICouponShareSettingInfo, AWEPOIInfoModel, AWEPOITextTagRateInfoModel, AWEPOIServiceEntryModel, AWEPOICommodity, NSDictionary, AWEPOIImageUploadModel, AWEPOIOffset, NSString, AWEPOIOwnerModel, AWEPOIDetailQualityModel, AWEPOIMapStoreGuideInfo, AWEPOIExtensionModel, NSNumber, NSArray, AWEPOIProductInfoModel, AWEPOIReportInfo;
@protocol IESLLFusePOIExtensionModel, IESLLFusePOIImageUploadModel, IESLLFusePOIInfoModel;

@interface AWEPOIDetailResponse : AWEBaseApiModel <IESLLFusePOIDetailResponse>

@property (readonly, nonatomic) id<IESLLFusePOIInfoModel> f_poiInfo;
@property (readonly, nonatomic) id<IESLLFusePOIExtensionModel> f_poiExtension;
@property (readonly, nonatomic) id<IESLLFusePOIImageUploadModel> f_poiImageUploadIcon;
@property (readonly, copy, nonatomic) NSString *f_lynxCommonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *collectTextConfigStr;
@property (copy, nonatomic) AWEPOIOffset *maxUnfoldOffset;
@property (retain, nonatomic) AWEPOIInfoModel *poiInfo;
@property (retain, nonatomic) AWEPOIDetailQualityModel *qualityScore;
@property (retain, nonatomic) AWEPOIExtensionModel *poiExtension;
@property (nonatomic) BOOL isLocal;
@property (retain, nonatomic) AWEPOIOwnerModel *owner;
@property (retain, nonatomic) AWEPOIProductInfoModel *productInfo;
@property (retain, nonatomic) AWEPOICommodity *commodity;
@property (retain, nonatomic) AWEPOICouponShareSettingInfo *couponShareSetting;
@property (retain, nonatomic) NSArray *awemeTabModels;
@property (nonatomic) long long aroundHotPoiCount;
@property (retain, nonatomic) AWEPOITextTagRateInfoModel *textTagRateInfo;
@property (retain, nonatomic) NSArray *dynamic;
@property (retain, nonatomic) AWEPOIServiceEntryModel *autoOpenService;
@property (retain, nonatomic) NSNumber *poiDistanceBury;
@property (nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) NSNumber *isIntentionPage;
@property (retain, nonatomic) NSDictionary *abDictionary;
@property (nonatomic) unsigned long long cardDisplayStyle;
@property (nonatomic) BOOL hasMpSpu;
@property (nonatomic) unsigned long long bizlineType;
@property (retain, nonatomic) AWEPOIImageUploadModel *poiImageUploadIcon;
@property (retain, nonatomic) AWEPOIReportInfo *reportInfo;
@property (copy, nonatomic) NSString *userType;
@property (retain, nonatomic) NSArray *moreOptionItems;
@property (retain, nonatomic) NSDictionary *maxUnfoldOffsetParams;
@property (nonatomic) BOOL isCityPage;
@property (copy, nonatomic) NSString *lastChunkName;
@property (copy, nonatomic) NSString *lynxCommonData;
@property (copy, nonatomic) NSDictionary *collectTextConfig;
@property (copy, nonatomic) NSString *footprintMapSchema;
@property (nonatomic) unsigned long long footprintMapAB;
@property (copy, nonatomic) NSString *aoiBorder;
@property (retain, nonatomic) AWEPOIMapStoreGuideInfo *storeGuideInfo;

+ (id)userListJSONTransformer;
+ (id)moreOptionItemsJSONTransformer;
+ (id)awemeTabModelsJSONTransformer;
+ (id)dynamicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)view_hasValidPhoneNumber;
- (BOOL)view_hasValidCompanyPage;
- (BOOL)view_hasValidCost;
- (id)p_formattedCostForCost:(double)a0;
- (id)view_costString;
- (BOOL)cardStyleHasNoMargin;
- (id)collectedText;
- (id)uncollectedText;
- (id)collectedBubbleText;
- (id)recommendTitleText;
- (id)businessHourDescription;
- (void).cxx_destruct;

@end
