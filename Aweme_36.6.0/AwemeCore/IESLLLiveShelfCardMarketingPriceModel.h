@class NSString, NSNumber, IESLLLiveShelfCardMarketingPriceExpressionModel;

@interface IESLLLiveShelfCardMarketingPriceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *currencySign;
@property (retain, nonatomic) NSNumber *finalPrice;
@property (copy, nonatomic) NSString *finalPriceSpecialText;
@property (copy, nonatomic) NSString *finalPricePrefix;
@property (copy, nonatomic) NSString *finalPricePostfix;
@property (retain, nonatomic) IESLLLiveShelfCardMarketingPriceExpressionModel *secondPrice;
@property (retain, nonatomic) IESLLLiveShelfCardMarketingPriceExpressionModel *thirdPrice;
@property (copy, nonatomic) NSString *discountType;
@property (copy, nonatomic) NSString *discountLongText;
@property (copy, nonatomic) NSString *discountSuffixText;
@property (copy, nonatomic) NSString *savedAmountLongText;
@property (copy, nonatomic) NSString *tagType;
@property (copy, nonatomic) NSString *toolText;
@property (copy, nonatomic) NSString *buttonType;
@property (nonatomic) BOOL expressionGeneralVersion;
@property (copy, nonatomic) NSString *couponAmountText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rawModelFromJsonString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
