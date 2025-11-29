@class NSString;

@interface AWEMVChannelBannerManager : NSObject

@property (retain, nonatomic) NSString *largeModelReplacedByBannerItemID;

+ (long long)bannerMaxShowTimesInOneDay;
+ (long long)todayShownTimesOfBanner:(id)a0;
+ (void)recordBannerCloseStateWithBanner:(id)a0 isClosed:(BOOL)a1;
+ (BOOL)enableBannerInsertInOldBannerOrInRealTimeBanner;
+ (void)updateLocalBannerConfig;
+ (void)recordBannerHasShownToday:(id)a0;
+ (id)largeBannerListAwemeModeForInsert;
+ (id)largeBannerAwemeModelForInsert;
+ (id)smallBannerAwemeModelForInsertInFirstPosition;
+ (id)smallBannerAwemeModelForInsertInLoadMore;
+ (unsigned long long)shouldShowLargeBanner:(id)a0;
+ (unsigned long long)shouldShowSmallBanner:(id)a0;
+ (BOOL)enableBannerInsertCapacity;
+ (id)buildAwemeModelWithBanner:(id)a0;
+ (id)buildAwemeModelWithBannerList:(id)a0;
+ (void)mapAwemeBannerModelIntoMVChannelBannerModel:(id)a0;
+ (BOOL)isLargeBannerModelValid:(id)a0;
+ (BOOL)isBannerInShowTime:(id)a0;
+ (BOOL)hasClosedBanner:(id)a0;
+ (BOOL)hasReachedBannerShownLimit:(id)a0;
+ (BOOL)largeBannerEnableShow;
+ (BOOL)isSmallBannerModelValid:(id)a0;
+ (BOOL)smallBannerEnableShow;
+ (BOOL)hasShownBanner:(id)a0;
+ (BOOL)largeBannerEnableShowInCacheCapacity;
+ (BOOL)smallBannerEnableShowInCacheCapacity;
+ (unsigned long long)shouldShowSmallBannerUnderRedDotLanding:(id)a0;
+ (id)recordOfBanner:(id)a0;
+ (void)setRecord:(id)a0 banner:(id)a1;
+ (id)recordKeyOfBanner:(id)a0;
+ (void)reduceTodayShownTimesOfBannerIfBannerShownInReplaceMode:(id)a0;
+ (void)recordBannerCloseStateWithBannerModelList:(id)a0 isClosed:(BOOL)a1;
+ (id)buildRequestURLWithQueryParams;
+ (void)requestBannerConfig:(id /* block */)a0;
+ (id)getSavedBannerList;
+ (id)getSavedLargeBanner;
+ (id)getSavedLargeBannerList;
+ (id)getValidLargeBannerList:(id)a0;
+ (id)getLimitLargeBannerList:(id)a0;
+ (id)getSavedSmallBannerList;
+ (void)saveBannerList:(id)a0;
+ (void)clearSavedBannerList;
+ (id)insertBannerToAwemeList:(id)a0 isFirst:(BOOL)a1 insertDestination:(unsigned long long)a2;
+ (id)insertBannerToVerifiedRequestAwemeModelList:(id)a0 context:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
