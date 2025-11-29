@class NSArray, ACCMusicChartMusicModel;

@interface ACCMusicChartDetailModel : ACCBaseApiModel

@property (retain, nonatomic) ACCMusicChartMusicModel *music;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)awemeListJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
