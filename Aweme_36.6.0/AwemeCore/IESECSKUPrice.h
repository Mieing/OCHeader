@class NSNumber, IESECDiscountPrice, NSString;

@interface IESECSKUPrice : NSObject <IESECGoodsPriceLabelModel>

@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECDiscountPrice *discount;
@property (retain, nonatomic) IESECDiscountPrice *groupbuyDiscount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minPrice;
- (id)maxPrice;
- (BOOL)hasGapPrice;
- (id)price;
- (void).cxx_destruct;

@end
