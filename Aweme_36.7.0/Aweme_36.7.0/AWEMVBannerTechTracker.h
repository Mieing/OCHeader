@interface AWEMVBannerTechTracker : NSObject

+ (void)trackBannerRequestWithCacheMode:(long long)a0 requestStatus:(unsigned long long)a1 errorReason:(unsigned long long)a2 requestResult:(unsigned long long)a3;
+ (void)trackBannerBeingFiltered:(id)a0 type:(id)a1 filteredReason:(unsigned long long)a2 logPb:(id)a3;
+ (void)trackBannersFilteredDiffInType:(id)a0 beforeFilteredBanners:(id)a1 beforeNum:(id)a2 afterFilteredBanners:(id)a3 afterNum:(id)a4 logPb:(id)a5;
+ (void)trackBannerInsertDestination:(id)a0 type:(id)a1 insertDestination:(unsigned long long)a2;
+ (void)trackBannerInsertReplaceWhichAwemeModel:(id)a0 type:(id)a1;

@end
