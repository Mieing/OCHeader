@class AWEGrouponPageInitInfo, NSString, NSDictionary, NSArray, AWENearbySwitchButtonGuideRule, AWENearbyGuideModel, AWEGrouponTabInitInfo;

@interface AWENearbyInitModel : AWEBaseApiModel

@property (nonatomic) long long nearbyFeedDualMode;
@property (nonatomic) long long nearbyPreMode;
@property (nonatomic) long long guideTimeStamp;
@property (nonatomic) long long isOverseaCountry;
@property (nonatomic) long long isNearbyFeedCard;
@property (copy, nonatomic) NSString *guideDsl;
@property (copy, nonatomic) NSDictionary *dualAbParam;
@property (nonatomic) BOOL enableSwitchFeedStyle;
@property (nonatomic) long long dualModeBySetting;
@property (nonatomic) long long dualModeForGuideSetting;
@property (copy, nonatomic) NSArray *nearbyForGuideCityCodeList;
@property (retain, nonatomic) AWENearbySwitchButtonGuideRule *dualButtonGuide;
@property (retain, nonatomic) AWENearbySwitchButtonGuideRule *fullButtonGuide;
@property (copy, nonatomic) NSDictionary *searchBarConfig;
@property (retain, nonatomic) AWENearbyGuideModel *firstGuideModel;
@property (retain, nonatomic) AWENearbyGuideModel *secondGuideModel;
@property (retain, nonatomic) AWENearbyGuideModel *offlineTransformerNotice;
@property (nonatomic) BOOL skipQueryTransformer;
@property (copy, nonatomic) NSString *transParam;
@property (copy, nonatomic) AWEGrouponTabInitInfo *grouponTabInitInfo;
@property (retain, nonatomic) AWEGrouponPageInitInfo *grouponPageInitInfo;
@property (copy, nonatomic) NSString *nearbyCapsuleText;
@property (copy, nonatomic) NSString *collectInitInfo;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
