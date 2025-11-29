@class NSArray, NSString;

@interface AWEMusicPerformanceListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *performanceList;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)performanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
