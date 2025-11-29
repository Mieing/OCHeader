@class AWEGoodsArticleInfoModel, NSString, NSArray, NSDictionary, AWEECTagExtra, NSNumber, AWEURLModel;

@interface AWEGoodsAnchorContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *anchorTitle;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) BOOL showCommentPopup;
@property (copy, nonatomic) NSString *orderID;
@property (retain, nonatomic) NSNumber *anchorSource;
@property (copy, nonatomic) NSArray *promotionIDList;
@property (nonatomic) long long pageInternalFlowStyle;
@property (copy, nonatomic) NSString *elasticSecondTitle;
@property (retain, nonatomic) AWEURLModel *icon;
@property (nonatomic) long long elasticSecondTitleStyle;
@property (copy, nonatomic) NSString *anchorPrice;
@property (nonatomic) BOOL showProductImage;
@property (retain, nonatomic) AWEGoodsArticleInfoModel *pdtImg;
@property (copy, nonatomic) NSString *picText;
@property (copy, nonatomic) NSDictionary *productPromiseInfo;
@property (copy, nonatomic) NSString *extraLog;
@property (copy, nonatomic) NSString *anchorSuffix;
@property (retain, nonatomic) AWEECTagExtra *anchorSuffixExtra;
@property (copy, nonatomic) NSString *priceLabel;
@property (copy, nonatomic) NSString *priceSuffix;
@property (retain, nonatomic) NSArray *discountLabels;
@property (copy, nonatomic) NSArray *tagExtraList;
@property (copy, nonatomic) NSArray *goodPriceParams;
@property (nonatomic) long long goodPriceCardGuessLikeOpt;
@property (nonatomic) long long goodPriceCardMainOpt;
@property (nonatomic) long long anchorSuffixUI;
@property (nonatomic) long long anchorTitleReplace;
@property (copy, nonatomic) NSString *pitayaString;
@property (copy, nonatomic) NSArray *productCategory;
@property (nonatomic) BOOL enableListInnerFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)discountLabelsJSONTransformer;
+ (id)tagExtraListJSONTransformer;
+ (id)JSONStringToDictTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
