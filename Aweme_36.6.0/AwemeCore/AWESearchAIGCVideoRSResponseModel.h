@class NSArray, NSDictionary;

@interface AWESearchAIGCVideoRSResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *videoRSList;
@property (copy, nonatomic) NSDictionary *logPB;

+ (id)videoRSListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
