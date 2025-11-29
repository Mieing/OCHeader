@class NSString, NSDictionary, NSValue, NSNumber, AWEURLModel;

@interface AWEPOIFeedUgcQAEntranceInfoModel : MTLModel <AWEPOIDetailFeedUgcModelABParamsProtocol, MTLJSONSerializing>

@property (retain, nonatomic) NSValue *qaSize;
@property (retain, nonatomic) NSValue *simpleQaSize;
@property (retain, nonatomic) NSValue *guidedQaSize;
@property (retain, nonatomic) NSNumber *shortPromptTop;
@property (retain, nonatomic) NSNumber *countTop;
@property (nonatomic) BOOL hasTrackedShow;
@property (copy, nonatomic) NSDictionary *abParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *qaPageUrl;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSString *shortPromptText;
@property (copy, nonatomic) NSString *qaCountText;
@property (copy, nonatomic) NSString *fullPromptText;
@property (copy, nonatomic) NSString *footerPromptText;
@property (nonatomic) long long emptyRateCardStyle;
@property (copy, nonatomic) NSString *headerModuleTitle;
@property (retain, nonatomic) AWEURLModel *rateImg;
@property (copy, nonatomic) NSString *rateContent;
@property (copy, nonatomic) NSString *nextRateContent;
@property (copy, nonatomic) NSString *schemaContent;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) BOOL showMoreFold;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mobParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowRateCard;
- (unsigned long long)ugcDisplayStyle;
- (BOOL)hitTitleAB;
- (void).cxx_destruct;

@end
