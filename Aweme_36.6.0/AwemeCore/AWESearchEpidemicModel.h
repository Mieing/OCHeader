@class AWESearchEpidemicLiveModel, NSArray, NSString, UIColor, AWESearchEpidemicBannerModel, NSNumber, AWESearchEpidemicLiveCardModel;

@interface AWESearchEpidemicModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchEpidemicBannerModel *bannerModel;
@property (retain, nonatomic) AWESearchEpidemicLiveModel *liveModel;
@property (retain, nonatomic) NSArray *topicModels;
@property (retain, nonatomic) NSArray *statisticModels;
@property (retain, nonatomic) NSArray *statiticsTitleArray;
@property (retain, nonatomic) NSString *moreText;
@property (retain, nonatomic) NSString *moreSchemaURL;
@property (retain, nonatomic) NSString *updateTime;
@property (retain, nonatomic) NSNumber *aladdinID;
@property (retain, nonatomic) AWESearchEpidemicLiveCardModel *liveCard;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) NSString *searchAutoplayBusiness;

+ (id)liveModelJSONTransformer;
+ (id)bannerModelJSONTransformer;
+ (id)topicModelsJSONTransformer;
+ (id)statisticModelsJSONTransformer;
+ (id)liveCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)bgColorJSONTransformer;

- (void).cxx_destruct;

@end
