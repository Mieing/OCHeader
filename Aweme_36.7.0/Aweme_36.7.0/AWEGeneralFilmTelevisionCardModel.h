@class AWEAwemeModel, NSString, NSArray, AWEGeneralFilmTelevisionBannerModel, AWEGeneralFilmTVInfoTextModuleModel, AWEGeneralFilmTelevisionInfoModel, AWEGeneralFilmTVLeadingCreatorModel, NSNumber;

@interface AWEGeneralFilmTelevisionCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWEGeneralFilmTelevisionInfoModel *filmTVInfoModel;
@property (retain, nonatomic) NSArray *sourceModelList;
@property (retain, nonatomic) AWEGeneralFilmTVInfoTextModuleModel *textModule;
@property (retain, nonatomic) AWEGeneralFilmTelevisionBannerModel *bannerModel;
@property (retain, nonatomic) AWEGeneralFilmTVLeadingCreatorModel *actorInfoModel;
@property (retain, nonatomic) AWEAwemeModel *coverVideo;
@property (copy, nonatomic) NSString *bgColorString;
@property (copy, nonatomic) NSString *centerColorString;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *type;
@property (nonatomic) BOOL showDivideLine;

+ (id)textModuleJSONTransformer;
+ (id)actorInfoModelJSONTransformer;
+ (id)filmTVInfoModelJSONTransformer;
+ (id)sourceModelListJSONTransformer;
+ (id)bannerModelJSONTransformer;
+ (id)coverVideoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)centerColor;
- (id)bgColor;
- (void).cxx_destruct;

@end
