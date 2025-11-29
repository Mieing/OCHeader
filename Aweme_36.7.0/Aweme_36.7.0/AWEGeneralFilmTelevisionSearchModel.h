@class AWEGeneralFilmTelevisionCardModel, AWEGeneralFilmTelevisionModuleModel;

@interface AWEGeneralFilmTelevisionSearchModel : AWEBaseApiModel

@property (retain, nonatomic) AWEGeneralFilmTelevisionCardModel *cardModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionModuleModel *moduleModel;
@property (nonatomic) long long type;

+ (id)cardModelJSONTransformer;
+ (id)topicModelJSONTransformer;
+ (id)moduleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
