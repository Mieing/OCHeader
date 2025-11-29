@interface AWEGrouponCommonRequester : NSObject

+ (id)commonParams;
+ (id)searchMidPageCommonParamsWithReferstring:(id)a0;
+ (id)homepageRequestCommonParamsWithPageType:(long long)a0;
+ (id)bffParams;
+ (id)p_homepageRequestBaseParamsWithPageType:(long long)a0;
+ (id)p_homepageRequestLocationParamsWithPageType:(long long)a0;
+ (id)p_homepageRequestSessionParamsWithPageType:(long long)a0;
+ (id)p_roamParamsFromCityModel:(id)a0 pageType:(long long)a1;
+ (id)hotFeedCommonParams;
+ (id)searchStreamCommonParamsWithReferstring:(id)a0 isForceInGrouponTab:(BOOL)a1;
+ (void)userActionCollectWithParams:(id)a0 complete:(id /* block */)a1;

@end
