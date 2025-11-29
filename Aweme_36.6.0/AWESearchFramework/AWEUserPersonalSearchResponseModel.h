@class NSArray, NSDictionary, AWEUserSearchDoodleConfigModel;

@interface AWEUserPersonalSearchResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEUserSearchDoodleConfigModel *doodleConfig;

+ (id)awemeListJSONTransformer;
+ (id)doodleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
