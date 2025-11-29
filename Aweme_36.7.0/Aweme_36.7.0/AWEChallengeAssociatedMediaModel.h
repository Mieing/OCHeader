@class AWEGeneralFilmTVSourceModel, NSString, NSArray, AWEGeneralFilmTelevisionInfoModel, AWEChallengeAssociatedMediaButtonModel, AWEURLModel;
@protocol AWEGeneralFilmTVSourceModelProtocol;

@interface AWEChallengeAssociatedMediaModel : MTLModel <AWEChallengeAssociatedMediaModelProtocol, MTLJSONSerializing>

@property (retain, nonatomic) id<AWEGeneralFilmTVSourceModelProtocol> filmModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *readMoreText;
@property (copy, nonatomic) NSString *readMoreURL;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *mediaName;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *releaseDate;
@property (nonatomic) long long duration;
@property (nonatomic) long long seqsCount;
@property (copy, nonatomic) NSArray *classification;
@property (nonatomic) double rating;
@property (nonatomic) long long ratingStatus;
@property (retain, nonatomic) AWEChallengeAssociatedMediaButtonModel *buttonModel;
@property (nonatomic) long long compassID;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *filmModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionInfoModel *movieInfoModel;
@property (nonatomic) long long hotScore;
@property (copy, nonatomic) NSArray *versions;
@property (retain, nonatomic) NSString *timeAndRegion;
@property (retain, nonatomic) NSString *tagsAndEpisode;
@property (retain, nonatomic) NSString *actors;
@property (retain, nonatomic) NSString *ratingSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverURLJSONTransformer;
+ (id)taskJSONTransformer;
+ (id)movieInfoModelJSONTransformer;
+ (id)buttonModelJSONTransformer;
+ (id)filmModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
