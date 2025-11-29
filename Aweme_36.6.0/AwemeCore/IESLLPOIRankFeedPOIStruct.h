@class IESLLPOIRankFeedStyleModel, NSArray, NSString, IESLLPOIRankContentItemModel, IESLLPOISpuModel, IESLLPOIServiceButtonModel, IESLLPOIInfoModel;

@interface IESLLPOIRankFeedPOIStruct : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOIRankContentItemModel *poiInfo;
@property (retain, nonatomic) IESLLPOIServiceButtonModel *poiServiceButton;
@property (copy, nonatomic) NSArray *itemIDs;
@property (copy, nonatomic) NSString *rankUrl;
@property (copy, nonatomic) NSString *rankIndex;
@property (copy, nonatomic) NSString *rankName;
@property (copy, nonatomic) NSString *rankShortDesc;
@property (retain, nonatomic) IESLLPOIRankFeedStyleModel *rankStyle;
@property (nonatomic) long long rateCount;
@property (copy, nonatomic) NSString *rateCountStr;
@property (copy, nonatomic) NSString *selectItemId;
@property (retain, nonatomic) NSArray *highlightVideoReviews;
@property (retain, nonatomic) NSArray *otherRankedBrandPOIs;
@property (retain, nonatomic) IESLLPOIInfoModel *poiStruct;
@property (retain, nonatomic) IESLLPOISpuModel *spuInfo;
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
