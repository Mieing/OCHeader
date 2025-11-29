@class NSString, IESECGoodsDetailButtonTipsModel;

@interface IESECMatchPurchaseBottomModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *buyText;
@property (copy, nonatomic) NSString *discountText;
@property (copy, nonatomic) NSString *links;
@property (nonatomic) long long applyCoupon;
@property (nonatomic) BOOL grayButton;
@property (copy, nonatomic) NSString *wordColor;
@property (retain, nonatomic) IESECGoodsDetailButtonTipsModel *buttonTips;
@property (copy, nonatomic) NSString *benifitTip;
@property (nonatomic) double totalPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
