@class AWEAwemeModel;

@interface AWEAlbumCaptionImageResponseModel : AWEBaseApiModel

@property (nonatomic) long long demotionStatus;
@property (retain, nonatomic) AWEAwemeModel *aweme;

+ (id)demotionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
