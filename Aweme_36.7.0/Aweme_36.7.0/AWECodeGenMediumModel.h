@class AWECodeGenAppointmentModel, NSString, NSArray, AWECodeGenUrlModel, AWECodeGenMediumBoxOfficeModel, AWECodeGenPurchaseModel, AWECodeGenPosterInfoModel;

@interface AWECodeGenMediumModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *releaseDate;
@property (retain, nonatomic) AWECodeGenUrlModel *posterModel;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *rank;
@property (nonatomic) BOOL isCollect;
@property (nonatomic) int episodes;
@property (nonatomic) long long duration;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *doubanRating;
@property (copy, nonatomic) NSArray *movieVersionArray;
@property (copy, nonatomic) NSArray *mediumCategoryArray;
@property (copy, nonatomic) NSString *englishName;
@property (copy, nonatomic) NSString *releaseAreas;
@property (copy, nonatomic) NSString *movieId;
@property (nonatomic) long long billboardType;
@property (retain, nonatomic) AWECodeGenPosterInfoModel *postersV2Model;
@property (retain, nonatomic) AWECodeGenMediumBoxOfficeModel *mediumBoxOfficeModel;
@property (nonatomic) double heatScore;
@property (nonatomic) BOOL isWannaSee;
@property (nonatomic) int wannaSeeCount;
@property (nonatomic) int releaseStatus;
@property (retain, nonatomic) AWECodeGenAppointmentModel *appointmentInfoModel;
@property (retain, nonatomic) AWECodeGenPurchaseModel *purchaseInfoModel;
@property (copy, nonatomic) NSArray *actorsArray;
@property (copy, nonatomic) NSArray *tagsArray;
@property (nonatomic) int p_copyRight;
@property (copy, nonatomic) NSString *albumId;
@property (nonatomic) int latestEpisode;
@property (nonatomic) int episodeStatus;
@property (nonatomic) int cooperationPattern;
@property (nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) NSString *produceArea;
@property (copy, nonatomic) NSArray *aliasArray;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) int subType;
@property (nonatomic) long long releaseTimeUnix;
@property (copy, nonatomic) NSString *showSite;
@property (copy, nonatomic) NSString *seriesId;
@property (nonatomic) long long commentedCount;
@property (nonatomic) float dyRating;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
