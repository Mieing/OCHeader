@class AWESearchFeelGoodEntranceIconModel, NSString, AWESearchGoodsFeedbackModel, AWESearchNoResultModel, NSArray, AWESearchFeelGoodModel, NSDictionary, AWESearchGSInfoModel, AWESearchGlobalCartModel, AWEEcomSearchInsertCouponConfigModel, AWESearchTagExtraStarUrlModel;

@interface AWESearchGlobalDoodleConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *useNewShopTagIcon;
@property (copy, nonatomic) NSDictionary *userServiceLogInfo;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long resultFrom;
@property (nonatomic) long long jumpGeneral;
@property (nonatomic) long long shownCount;
@property (retain, nonatomic) AWESearchGoodsFeedbackModel *feedbackConfig;
@property (retain, nonatomic) AWESearchFeelGoodModel *feelGoodModel;
@property (retain, nonatomic) AWESearchNoResultModel *noResultConfig;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (nonatomic) long long isSimplifiedProduct;
@property (copy, nonatomic) NSArray *filterSections;
@property (nonatomic) long long queryCorrectType;
@property (nonatomic) long long loadmorePreloadThreshold;
@property (nonatomic) BOOL showFeedback;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (copy, nonatomic) NSString *feedbackSubtitle;
@property (copy, nonatomic) NSDictionary *feedbackIntentInfo;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *feedbackEntranceIcon;
@property (nonatomic) long long feedbackShowTipsType;
@property (nonatomic) double feedbackShowTipsDurationMS;
@property (nonatomic) double feedbackShowTipsStartDelayMS;
@property (nonatomic) long long feedbackEntranceType;
@property (copy, nonatomic) NSString *searchScheme;
@property (copy, nonatomic) NSDictionary *filterSearchText;
@property (copy, nonatomic) NSString *format;
@property (retain, nonatomic) AWESearchGSInfoModel *gsInfo;
@property (copy, nonatomic) NSDictionary *toastInfo;
@property (retain, nonatomic) NSArray *filterDeleteList;
@property (copy, nonatomic) NSString *pendantToast;
@property (retain, nonatomic) AWESearchGlobalCartModel *shoppingCart;
@property (copy, nonatomic) NSString *liveInnerSearchChangeChannel;
@property (copy, nonatomic) NSString *liveInnerSearchChangeEnterFrom;
@property (retain, nonatomic) AWEEcomSearchInsertCouponConfigModel *insertCouponConfig;
@property (copy, nonatomic) NSDictionary *pitayaData;
@property (nonatomic) long long liveInfoBreathStyle;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *liveIconUrl;
@property (nonatomic) long long enterButtonStyle;
@property (copy, nonatomic) NSString *bottomTips;
@property (nonatomic) BOOL hasSidebar;
@property (copy, nonatomic) NSString *ecomSameCntText;
@property (nonatomic) long long ecomSameCnt;
@property (nonatomic) BOOL isSearchSupermarket;
@property (nonatomic) long long doubleColumnLayoutStyle;
@property (copy, nonatomic) NSString *instantAddressInfo;
@property (nonatomic) BOOL enableAssuranceStyle;

+ (id)filterSectionsJSONTransformer;
+ (id)insertCouponConfigJSONTransformer;
+ (id)pushTimeFeedOutLynxModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
