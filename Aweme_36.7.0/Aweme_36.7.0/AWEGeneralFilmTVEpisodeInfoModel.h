@class NSString, NSNumber, AWEGeneralFilmTelevisionTagModel;

@interface AWEGeneralFilmTVEpisodeInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *onlineTime;
@property (retain, nonatomic) NSNumber *opening;
@property (nonatomic) long long paymentStatus;
@property (copy, nonatomic) NSString *paymentString;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long schemaType;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *playURL;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *episodeTagIconUrl;
@property (nonatomic) BOOL isVip;
@property (nonatomic) BOOL isNew;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoTag;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoLightTag;

+ (id /* block */)isEqualBlock;
+ (id)longVideoTagJSONTransformer;
+ (id)longVideoLightTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
