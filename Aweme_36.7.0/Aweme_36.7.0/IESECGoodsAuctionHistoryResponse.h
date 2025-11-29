@class NSArray, NSNumber;

@interface IESECGoodsAuctionHistoryResponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *records;
@property (retain, nonatomic) NSNumber *offset;

+ (id)recordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
