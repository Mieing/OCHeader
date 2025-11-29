@class MMUILabel;

@interface WCFPStoreProductElement_Price : WCFPStoreProductElement_Base

@property (retain, nonatomic) MMUILabel *priceLabel;
@property (retain, nonatomic) MMUILabel *descLabel;

+ (long long)viewHeightByCardVM:(id)a0;
+ (long long)edgeLR;

- (void)setupSubviews;
- (void)reloadData;
- (void).cxx_destruct;

@end
