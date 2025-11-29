@class NSArray, NSDictionary, IESECMallInnerFeedRecommendConfModel;

@interface IESECMallInnerFeedFirstCardResponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *recommendItemModelArray;
@property (copy, nonatomic) NSArray *recommendCardModelArray;
@property (retain, nonatomic) IESECMallInnerFeedRecommendConfModel *recommendConfModel;
@property (copy, nonatomic) NSDictionary *extraDict;

+ (id)recommendCardModelArrayJSONTransformer;
+ (id)recommendItemModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
