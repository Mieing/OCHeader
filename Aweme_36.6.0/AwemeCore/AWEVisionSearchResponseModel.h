@class NSArray, NSString;

@interface AWEVisionSearchResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *dataModels;
@property (copy, nonatomic) NSArray *objectModels;
@property (nonatomic) long long cursor;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *contentHash;
@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *searchID;

+ (id)dataModelsJSONTransformer;
+ (id)objectModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
