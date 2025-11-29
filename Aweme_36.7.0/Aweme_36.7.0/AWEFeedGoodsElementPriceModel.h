@class NSNumber, NSString;

@interface AWEFeedGoodsElementPriceModel : NSObject <IESECGoodsPriceLabelModel>

@property (retain, nonatomic) NSNumber *price;
@property (nonatomic) BOOL hasGapPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
