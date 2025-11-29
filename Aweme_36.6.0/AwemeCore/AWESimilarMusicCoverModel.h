@class AWESimilarMusicCoverDetailModel;

@interface AWESimilarMusicCoverModel : AWEBaseApiModel

@property (retain, nonatomic) AWESimilarMusicCoverDetailModel *thumbnail;

+ (id)thumbnailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
