@class NSString, NSNumber, AWEGeneralFilmTelevisionTagModel;

@interface AWEGeneralFilmTelevisionInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *actor;
@property (copy, nonatomic) NSString *cID;
@property (copy, nonatomic) NSString *director;
@property (retain, nonatomic) NSNumber *episodes;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL isCollection;
@property (nonatomic) BOOL isMediumAnchor;
@property (copy, nonatomic) NSString *microAppURL;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *maoyanScore;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *scoreWord;
@property (retain, nonatomic) NSNumber *mediumType;
@property (retain, nonatomic) NSNumber *playCount;
@property (copy, nonatomic) NSString *rank;
@property (retain, nonatomic) NSNumber *season;
@property (nonatomic) long long releaseType;
@property (nonatomic) long long paymentStatus;
@property (copy, nonatomic) NSString *summery;
@property (copy, nonatomic) NSString *ticketsURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSString *uploadTime;
@property (retain, nonatomic) NSNumber *wish;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long mediumUIStyle;
@property (copy, nonatomic) NSString *paymentString;
@property (copy, nonatomic) NSString *posterString;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoTag;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoLightTag;

+ (id)longVideoTagJSONTransformer;
+ (id)longVideoLightTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
