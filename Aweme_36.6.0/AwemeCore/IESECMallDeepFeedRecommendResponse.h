@class NSArray, NSString, NSDictionary, NSNumber;

@interface IESECMallDeepFeedRecommendResponse : IESECBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSArray *recommendCardModelArray;
@property (copy, nonatomic) NSString *postBack;
@property (copy, nonatomic) NSDictionary *extraDict;

+ (id)recommendCardModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
