@class NSArray, ACCVideoMusicCategoryModel;

@interface AWEAIVideoClipMusicListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *musicList;
@property (retain, nonatomic) ACCVideoMusicCategoryModel *categoryInfo;
@property (nonatomic) BOOL hasMore;

+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
