@class NSString, IESLLPOIActivityModel, NSArray, IESLLPOIHeadVideoCardModel, IESLLPOIClassRankModel, IESLLPOIOverseasInfo, IESLLPOIDetailExposedSpuModel, IESLLPOIChainBrandEntry, IESLLPOIDetailProductItemRateCard;

@interface IESLLPOIExtensionModel : IESLLifeBaseApiModel <IESLLFusePOIExtensionModel>

@property (readonly, nonatomic) long long f_picTotalCount;
@property (readonly, nonatomic) NSArray *f_photos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *telephone;
@property (copy, nonatomic) NSString *businessHour;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSString *cost;
@property (copy, nonatomic) NSString *costWithUnit;
@property (copy, nonatomic) NSString *subtype;
@property (retain, nonatomic) IESLLPOIHeadVideoCardModel *video;
@property (retain, nonatomic) NSArray *photos;
@property (retain, nonatomic) NSArray *photoStrings;
@property (nonatomic) long long picTotalCount;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) IESLLPOIActivityModel *poiActivityModel;
@property (retain, nonatomic) IESLLPOIClassRankModel *classRank;
@property (retain, nonatomic) NSArray *ranks;
@property (nonatomic) BOOL hasUploadImagePermission;
@property (nonatomic) BOOL showMerchantFixPrompt;
@property (copy, nonatomic) NSString *favRestaurantUrl;
@property (retain, nonatomic) IESLLPOIDetailExposedSpuModel *poiExposedSpu;
@property (retain, nonatomic) IESLLPOIDetailProductItemRateCard *rateCard;
@property (copy, nonatomic) NSString *highlightDesc;
@property (copy, nonatomic) NSString *rankDesc;
@property (copy, nonatomic) NSString *photosReportSchema;
@property (retain, nonatomic) IESLLPOIChainBrandEntry *chainBrandEntry;
@property (copy, nonatomic) NSString *galleryHeaderLynxURL;
@property (copy, nonatomic) NSString *galleryBottomLynxURL;
@property (retain, nonatomic) IESLLPOIOverseasInfo *overseas;

+ (id)ranksJSONTransformer;
+ (id)photosJSONTransformer;
+ (id)poiActivityModelJSONTransformer;
+ (id)overseasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
