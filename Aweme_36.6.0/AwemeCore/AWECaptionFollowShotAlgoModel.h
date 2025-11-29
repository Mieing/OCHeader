@class NSArray;

@interface AWECaptionFollowShotAlgoModel : AWEBaseBizConfigModel

@property (nonatomic) double roundTime;
@property (copy, nonatomic) NSArray *subtitles;

+ (id)subtitlesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
