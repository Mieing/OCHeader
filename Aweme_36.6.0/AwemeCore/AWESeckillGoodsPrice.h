@class NSString;
@protocol AWEGoodsModelProtocol;

@interface AWESeckillGoodsPrice : NSObject <IESECGoodsPriceLabelModel>

@property (retain, nonatomic) id<AWEGoodsModelProtocol> goodsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minPrice;
- (id)maxPrice;
- (id)marketPrice;
- (BOOL)hasGapPrice;
- (id)initWithGoodsModel:(id)a0;
- (id)price;
- (void).cxx_destruct;

@end
