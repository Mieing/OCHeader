@class AWEURLModel, NSDictionary, AWESearchBackgroundImageModel, NSMutableArray, AWESearchColorConfigModel, AWESearchEasterEggModel, NSString, AWENearbyGuideSceneInfoModel, AWESearchBackgroundColorModel, AWENearbyGuideBubbleModel, AWESearchFeelGoodEntranceIconModel, AWESearchAdPopConfigModel, NSArray, NSNumber;

@interface AWEGeneralSearchExtraModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWESearchColorConfigModel *colorModel;
@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) NSNumber *refreshHasNewContent;
@property (copy, nonatomic) NSString *extraServerClientParams;
@property (retain, nonatomic) AWESearchBackgroundImageModel *backgroundImage;
@property (retain, nonatomic) AWESearchBackgroundColorModel *fullScreenBgColor;
@property (retain, nonatomic) AWESearchEasterEggModel *easterEggModel;
@property (nonatomic) BOOL hiddenFilter;
@property (nonatomic) BOOL hideLoadmoreText;
@property (nonatomic) BOOL ugcChallengeScene;
@property (copy, nonatomic) NSDictionary *searchPageConfig;
@property (copy, nonatomic) NSArray *filterSections;
@property (nonatomic) long long musicAnchorStyle;
@property (nonatomic) BOOL showFeedback;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (copy, nonatomic) NSString *feedbackSubtitle;
@property (copy, nonatomic) NSDictionary *feedbackIntentInfo;
@property (copy, nonatomic) NSDictionary *feedbackEntranceParams;
@property (nonatomic) long long feedbackEntranceType;
@property (copy, nonatomic) NSDictionary *filterSearchText;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *feedbackEntranceIcon;
@property (nonatomic) long long feedbackShowTipsType;
@property (nonatomic) double feedbackShowTipsDurationMS;
@property (nonatomic) double feedbackShowTipsStartDelayMS;
@property (copy, nonatomic) NSString *needsRequestPOIInfo;
@property (copy, nonatomic) NSString *couponSchame;
@property (copy, nonatomic) NSDictionary *couponGlobalProps;
@property (retain, nonatomic) AWENearbyGuideBubbleModel *nearbyGuideBubble;
@property (retain, nonatomic) AWENearbyGuideSceneInfoModel *nearbyGuideSceneInfo;
@property (nonatomic) long long preloadmoreLine;
@property (retain, nonatomic) NSMutableArray *searchPopInfo;
@property (nonatomic) BOOL isDoubleColumnLeft;
@property (nonatomic) BOOL isIntentSingleColumn;
@property (nonatomic) BOOL disableDropDownRefresh;
@property (retain, nonatomic) AWESearchAdPopConfigModel *popConfigModel;
@property (nonatomic) BOOL refreshAfterLogin;
@property (nonatomic) BOOL historyTransferToLife;
@property (nonatomic) long long doubleColumnButtonStyle;
@property (nonatomic) long long doubleColumnLayoutStyle;
@property (retain, nonatomic) AWEURLModel *bottomDoubleColumnBubbleCover;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSDictionary *ecomIntentMap;
@property (copy, nonatomic) NSString *srpAlgoForWindVane;
@property (nonatomic) long long tabActionStyle;
@property (nonatomic) BOOL enableSearchLayoutToast;

+ (id)tabsJSONTransformer;
+ (id)easterEggModelJSONTransformer;
+ (id)nearbyGuideBubbleJSONTransformer;
+ (id)nearbyGuideSceneInfoJSONTransformer;
+ (id)filterSectionsJSONTransformer;
+ (id)searchPopInfoJSONTransformer;
+ (id)colorModelJSONTransformer;
+ (id)backgroundImageJSONTransformer;
+ (id)fullScreenBgImageJSONTransformer;
+ (id)fullScreenBgColorJSONTransformer;
+ (id)userGuideJSONTransformer;
+ (id)feedbackEntranceIconJSONTransformer;
+ (id)popConfigModelJSONTransformer;
+ (id)bottomDoubleColumnBubbleCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
