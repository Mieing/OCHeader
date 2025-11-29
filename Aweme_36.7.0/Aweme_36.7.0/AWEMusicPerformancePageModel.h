@class NSArray;

@interface AWEMusicPerformancePageModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *performanceList;
@property (nonatomic) BOOL hasMore;

+ (id)performanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
