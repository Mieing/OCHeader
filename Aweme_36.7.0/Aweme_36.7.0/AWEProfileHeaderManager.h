@class NSString;

@interface AWEProfileHeaderManager : HTSService <HTSService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseCoverDominantColor;
+ (id)headerBackgroundColorWithHexColor:(id)a0;
+ (id)defaultHeaderBgColor;
+ (BOOL)isCompanyHeaderWithProfileType:(long long)a0 user:(id)a1;
+ (BOOL)shouldShowRecommendCardListWithProfileType:(long long)a0 user:(id)a1 isCurrentUser:(BOOL)a2;


@end
