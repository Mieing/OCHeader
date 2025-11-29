@interface AWENearbyGrouponFeedCommonUtils : NSObject

+ (id)referStringWithPageType:(long long)a0;
+ (id)getFeedSectionLayoutWtihPageType:(long long)a0;
+ (void)hideLiveSmallScreen;
+ (id)getLiveSmallWindowManger;
+ (BOOL)hasLiveSmallWindow;
+ (BOOL)isLiveSmallWindowShowingAtPageType:(long long)a0;
+ (id)lifeExtraInfoParamsWithPageContext:(id)a0;
+ (id)liveSmallWindowTrackParamsWithPageContext:(id)a0;
+ (id)cardInfoWithModel:(id)a0 isClick:(BOOL)a1;
+ (BOOL)shouldShowRecommendDataWithModel:(id)a0 p1aidPoiIds:(id)a1 p1aidProductIds:(id)a2;

@end
