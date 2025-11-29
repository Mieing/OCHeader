@class AWEURLModel;

@interface AWEMusicDecorateTagModel : AWEBaseApiModel

@property (nonatomic) long long clipTagType;
@property (retain, nonatomic) AWEURLModel *tagImageURL;
@property (retain, nonatomic) AWEURLModel *tagImageURLDark;

+ (id)tagImageURLJSONTransformer;
+ (id)tagImageURLDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
