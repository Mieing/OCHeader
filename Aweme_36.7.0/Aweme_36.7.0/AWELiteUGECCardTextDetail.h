@class NSString, AWELiteUGECAnchorPrice;

@interface AWELiteUGECCardTextDetail : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *couponInfo;
@property (copy, nonatomic) NSString *topTitle;
@property (copy, nonatomic) NSString *goodsTitle;
@property (copy, nonatomic) NSString *priceLabel;
@property (copy, nonatomic) NSString *discountText;
@property (retain, nonatomic) AWELiteUGECAnchorPrice *effectiveMinPrice;
@property (retain, nonatomic) AWELiteUGECAnchorPrice *discountMinPriceText;
@property (retain, nonatomic) AWELiteUGECAnchorPrice *inHandPrice;
@property (retain, nonatomic) AWELiteUGECAnchorPrice *crossLinePrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
