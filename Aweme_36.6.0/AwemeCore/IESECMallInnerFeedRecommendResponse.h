@class NSNumber, NSArray, NSDictionary;

@interface IESECMallInnerFeedRecommendResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSArray *recommendItemModelArray;
@property (copy, nonatomic) NSArray *recommendCardModelArray;
@property (copy, nonatomic) NSDictionary *extraDict;

+ (id)recommendCardModelArrayJSONTransformer;
+ (id)recommendItemModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
