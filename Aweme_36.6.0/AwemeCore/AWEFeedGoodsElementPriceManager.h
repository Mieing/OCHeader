@interface AWEFeedGoodsElementPriceManager : NSObject

+ (id)sharedManager;

- (id)getGoodsDetailModelFromDictionary:(id)a0;
- (id)getPriceLabelViewWithGoodsDetail:(id)a0;
- (void)setupPriceLabel:(id)a0 withGoodsDetail:(id)a1;
- (id)decodeFromRawData:(id)a0;
- (void)setupMainPriceLabel:(id)a0 supportPriceLabel:(id)a1 supportTextLabel:(id)a2 withGoodsDetail:(id)a3;
- (id)getPriceLabelViewWithAweme:(id)a0;

@end
