@class AWEURLModel;

@interface AWELVideoAlbumCoverInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long style;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
