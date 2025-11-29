@class NSString, NSArray, IESECGoodsPrice, NSNumber;

@interface IESECGoodsAuctionModel : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (retain, nonatomic) NSNumber *auctionID;
@property (retain, nonatomic) NSNumber *campaignID;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *priceHeader;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *startingPrice;
@property (retain, nonatomic) NSNumber *depositPrice;
@property (copy, nonatomic) NSString *depositProduct;
@property (retain, nonatomic) NSNumber *feeRation;
@property (copy, nonatomic) NSArray *auctionHistory;
@property (retain, nonatomic) NSNumber *totalSum;
@property (readonly, nonatomic) double currentTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESECGoodsPrice *subPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)auctionHistoryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)minPrice;
- (id)maxPrice;
- (BOOL)hasGapPrice;
- (id)price;
- (void).cxx_destruct;
- (id)init;

@end
