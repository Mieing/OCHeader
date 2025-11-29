@class NSString, NSArray, AWEGeneralFilmTVInfoTextModuleModel, AWEGeneralFilmTelevisionTagModel, NSNumber, AWEURLModel;

@interface AWEGeneralFilmTVSourceModel : AWEBaseApiModel <AWEGeneralFilmTVSourceModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *actors;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSArray *areas;
@property (retain, nonatomic) NSString *cID;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSArray *episodeList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *lastestSeriesCount;
@property (retain, nonatomic) NSNumber *currentSeriesCount;
@property (copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) NSNumber *mpID;
@property (copy, nonatomic) NSString *mpName;
@property (nonatomic) long long paymentStatus;
@property (copy, nonatomic) NSString *playWord;
@property (copy, nonatomic) NSString *releaseDate;
@property (retain, nonatomic) NSNumber *seriesCount;
@property (nonatomic) long long releaseType;
@property (copy, nonatomic) NSArray *showTypes;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEGeneralFilmTVInfoTextModuleModel *textModule;
@property (nonatomic) long long schemaType;
@property (copy, nonatomic) NSString *posterString;
@property (nonatomic) long long tagDisplayType;
@property (nonatomic) long long mediumUIStyle;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoTag;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoLightTag;
@property (nonatomic) BOOL isVip;

+ (id)coverJSONTransformer;
+ (id)longVideoTagJSONTransformer;
+ (id)longVideoLightTagJSONTransformer;
+ (id)episodeListJSONTransformer;
+ (id)textModuleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
