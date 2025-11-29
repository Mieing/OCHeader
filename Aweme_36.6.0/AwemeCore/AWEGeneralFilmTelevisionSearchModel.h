@class AWEGeneralFilmTelevisionModuleModel, AWEGeneralFilmTelevisionCardModel, AWEGeneralFilmTelevisionSeriesModel, AWEGeneralFilmTelevisionTopicModel;

@interface AWEGeneralFilmTelevisionSearchModel : AWEBaseApiModel

@property (retain, nonatomic) AWEGeneralFilmTelevisionCardModel *cardModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTopicModel *topicModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionModuleModel *moduleModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionSeriesModel *seriesModel;
@property (nonatomic) long long type;

+ (id)cardModelJSONTransformer;
+ (id)topicModelJSONTransformer;
+ (id)moduleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
