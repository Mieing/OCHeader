@class NSArray, NSNumber;

@interface AFDSchoolStoryFeedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *feedModels;
@property (readonly, nonatomic) NSArray *awemeModels;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)feedModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
