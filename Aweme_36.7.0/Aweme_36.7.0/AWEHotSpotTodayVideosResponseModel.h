@class NSNumber, NSArray, NSDictionary;

@interface AWEHotSpotTodayVideosResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSDictionary *extraInfoDict;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
