@class NSNumber, IESECDiscountPrice;

@interface IESECGoodsFeedDiscountConfigure : NSObject

@property (retain, nonatomic) IESECDiscountPrice *discount;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) BOOL hasGapPrice;
@property (nonatomic) BOOL hideDashLine;
@property (retain, nonatomic) NSNumber *minPrice;
@property (nonatomic) BOOL hideBackground;

- (void).cxx_destruct;

@end
