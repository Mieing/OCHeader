@class NSArray, AWEMusicChartMusicModel;

@interface AWEMusicChartDetailModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicChartMusicModel *music;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
