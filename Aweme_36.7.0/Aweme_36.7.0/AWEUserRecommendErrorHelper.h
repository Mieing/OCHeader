@interface AWEUserRecommendErrorHelper : NSObject

+ (id)requestOnAirError;
+ (BOOL)isUserRecommendError:(id)a0;
+ (BOOL)isRequestOnAirError:(id)a0;
+ (id)userRecommendErrorWithCode:(long long)a0 description:(id)a1;
+ (id)noMoreDataError;
+ (id)recommendClosedError;
+ (id)notLoginError;
+ (BOOL)isNoMoreDataError:(id)a0;
+ (BOOL)isRecommendClosedError:(id)a0;
+ (BOOL)isNotLoginError:(id)a0;

@end
