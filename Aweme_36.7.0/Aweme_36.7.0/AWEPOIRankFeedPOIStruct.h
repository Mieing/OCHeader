@class AWEPOIRankFeedStyleModel, NSString, NSArray, AWEPOIRankContentItemModel, AWEPOIServiceButtonModel, AWEPOISpuModel, AWEPOIInfoModel, AWEPOIDouDiscountItemCard;

@interface AWEPOIRankFeedPOIStruct : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIRankContentItemModel *poiInfo;
@property (retain, nonatomic) AWEPOIServiceButtonModel *poiServiceButton;
@property (copy, nonatomic) NSArray *itemIDs;
@property (copy, nonatomic) NSString *rankUrl;
@property (copy, nonatomic) NSString *rankIndex;
@property (copy, nonatomic) NSString *rankName;
@property (copy, nonatomic) NSString *rankShortDesc;
@property (retain, nonatomic) AWEPOIRankFeedStyleModel *rankStyle;
@property (nonatomic) long long rateCount;
@property (copy, nonatomic) NSString *rateCountStr;
@property (copy, nonatomic) NSString *selectItemId;
@property (retain, nonatomic) NSArray *highlightVideoReviews;
@property (retain, nonatomic) NSArray *otherRankedBrandPOIs;
@property (retain, nonatomic) AWEPOIInfoModel *poiStruct;
@property (retain, nonatomic) AWEPOISpuModel *spuInfo;
@property (retain, nonatomic) AWEPOIDouDiscountItemCard *rankItemCard;
@property (copy, nonatomic) NSString *recommendReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightVideoReviewsJSONTransformer;
+ (id)otherRankedBrandPOIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
