@class AWEURLModel;

@interface AWEOriginalSoundInfoModel : AWEBaseApiModel

@property (readonly, nonatomic) AWEURLModel *playURL;

+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
