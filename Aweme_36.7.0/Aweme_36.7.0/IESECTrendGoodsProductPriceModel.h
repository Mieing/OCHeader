@class IESECFeedPromotionWrapperModel, NSString;

@interface IESECTrendGoodsProductPriceModel : NSObject <IESECGoodsPriceLabelModel>

@property (retain, nonatomic) IESECFeedPromotionWrapperModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minPrice;
- (id)maxPrice;
- (id)marketPrice;
- (BOOL)hasGapPrice;
- (id)price;
- (id)header;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
