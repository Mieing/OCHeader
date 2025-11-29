@class AFDBookDetailPageVideoListModel;

@interface AFDBookDetailPageVideoListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AFDBookDetailPageVideoListModel *videoData;

+ (id)videoDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
