@class NSString, NSNumber;

@interface IESLLLiveShelfCardListItemCardDataDisplayControl : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buyButtonText;
@property (copy, nonatomic) NSNumber *isCouponProduct;
@property (copy, nonatomic) NSString *clickBuyTips;
@property (copy, nonatomic) NSString *prePriceText;
@property (copy, nonatomic) NSString *defaultPrePriceText;
@property (nonatomic) BOOL isSupportBuy;
@property (copy, nonatomic) NSString *buttonJumpUrl;
@property (nonatomic) unsigned long long buttonJumpUrlType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getTrackProductStockType;
- (void).cxx_destruct;

@end
