@class AWEURLModel, NSMutableDictionary, AWENearbyAsyncExposeCardModel, NSDictionary, AWENearbyActivityBgModel, AWENearbyActivityModel, NSString, AWENearbyActiveStatusModel, AWENearbyBannerResourceModel, AWENearbyPendantModel, AWETransformerGroupElement, AWENearbySettingsControlInfo, NSArray, AWENearbyWidgetModel, AWENearbySkyLightCardModel;

@interface AWENearbySettingsResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *transformerTabs;
@property (retain, nonatomic) AWENearbyBannerResourceModel *bannerResource;
@property (retain, nonatomic) AWENearbyPendantModel *pendantModel;
@property (retain, nonatomic) AWENearbyPendantModel *ugcActivityPandant;
@property (nonatomic) double serverTimeStamp;
@property (retain, nonatomic) AWENearbySkyLightCardModel *skyLightCardModel;
@property (copy, nonatomic) NSString *skyLightCapsuleTitle;
@property (retain, nonatomic) NSArray *preloadTimors;
@property (retain, nonatomic) NSArray *transformersCardList;
@property (retain, nonatomic) NSString *topContainerData;
@property (copy, nonatomic) NSString *transformerGlobalConfig;
@property (retain, nonatomic) NSArray *iconRules;
@property (retain, nonatomic) AWENearbyActiveStatusModel *activeStatusModel;
@property (nonatomic) BOOL shouldFoldTransformer;
@property (retain, nonatomic) AWEURLModel *bgURLModle;
@property (retain, nonatomic) AWEURLModel *bgLightUrl;
@property (retain, nonatomic) AWENearbyActivityBgModel *activityBg;
@property (retain, nonatomic) AWETransformerGroupElement *transformerElement;
@property (copy, nonatomic) NSString *bgTextColor;
@property (copy, nonatomic) NSString *bgTextColorLight;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSString *serverLatency;
@property (readonly, nonatomic) AWENearbyActivityModel *activityModel;
@property (retain, nonatomic) AWENearbyWidgetModel *widgetModel;
@property (retain, nonatomic) AWENearbyAsyncExposeCardModel *asyncExposeCardConfig;
@property (copy, nonatomic) NSString *currentLocationCity;
@property (retain, nonatomic) NSMutableDictionary *lifeServiceDiffHeightDictionary;
@property (copy, nonatomic) NSString *transformerDSLString;
@property (retain, nonatomic) AWENearbySettingsControlInfo *controlInfo;
@property (copy, nonatomic) NSString *transformerCardDSLString;
@property (nonatomic) BOOL canShowFeedGuide;
@property (nonatomic) BOOL hasLifeServiceEntrance;
@property (nonatomic) BOOL isRequestFeedGuide;
@property (nonatomic) BOOL isTransformerUnderTake;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) unsigned long long pullType;
@property (nonatomic) long long transformerTheme;
@property (nonatomic) long long displayTransformerTheme;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) unsigned long long rowType;
@property (nonatomic) long long pageType;
@property (nonatomic) unsigned long long settingDataFrom;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) long long cacheStrategy;
@property (copy, nonatomic) NSDictionary *dualSearchBarSetting;
@property (retain, nonatomic) NSString *geckoConfigString;
@property (retain, nonatomic) NSArray *geckoConfig;
@property (copy, nonatomic) NSDictionary *lifeServiceDiffHeightDictionaryBackUp;

+ (id)asyncExposeCardConfigJSONTransformer;
+ (id)transformersCardListJSONTransformer;
+ (id)widgetModelJSONTransformer;
+ (id)activityBgJSONTransformer;
+ (id)transformerTabsJSONTransformer;
+ (id)bannersJSONTransformer;
+ (id)pendantModelJSONTransformer;
+ (id)skyLightCardModelJSONTransformer;
+ (id)activeStatusModelJSONTransformer;
+ (id)iconRulesModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasHalfScreenData;
- (id)transformerDSLTemplate;
- (void)tranformDSLToElement;
- (id)cardInitDataInDictionary:(id)a0;
- (id)transformerCardInitData;
- (id)copyToDiskResponse;
- (BOOL)onlyHasTargetCards:(id)a0;
- (BOOL)hasExposeCard;
- (BOOL)isLifeEntrancePageEnable;
- (BOOL)hasHalfScreenDataWithCardInitData:(id)a0;
- (BOOL)hasExposeDataWithCardInitData:(id)a0;
- (void).cxx_destruct;

@end
