@class NSArray, NSDictionary;

@interface IESECMallDeepFeedFirstCardResponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *recommendCardModelArray;
@property (copy, nonatomic) NSDictionary *extraDict;

+ (id)recommendCardModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
