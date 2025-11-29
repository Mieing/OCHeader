@class NSArray;

@interface AWEVideoHallMoreFeedResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *previewList;

+ (id)previewListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
