@class NSArray, NSString, NSDictionary, IESECFindSimilarityPageResponseModel;

@interface IESECTrendGoodsResponseModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) IESECFindSimilarityPageResponseModel *page;
@property (copy, nonatomic) NSString *penetrateData;
@property (copy, nonatomic) NSArray *dislikeInfoResponse;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *requestLogID;

+ (id)itemsJSONTransformer;
+ (id)dislikeInfoResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
