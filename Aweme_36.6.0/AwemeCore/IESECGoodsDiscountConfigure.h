@class NSNumber, IESECDiscountPrice;

@interface IESECGoodsDiscountConfigure : NSObject

@property (retain, nonatomic) IESECDiscountPrice *discount;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideDashLine;
@property (retain, nonatomic) NSNumber *minPrice;
@property (nonatomic) long long discountStyle;
@property (nonatomic) long long showPriceStyle;

- (void).cxx_destruct;

@end
