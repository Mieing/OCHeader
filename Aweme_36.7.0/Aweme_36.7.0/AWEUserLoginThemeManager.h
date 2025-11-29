@class NSString, NSMutableArray, IESAccountPanelThemeResponseModel;

@interface AWEUserLoginThemeManager : NSObject

@property (retain, nonatomic) NSMutableArray *registerClasses;
@property (retain, nonatomic) IESAccountPanelThemeResponseModel *themeModel;
@property (nonatomic) BOOL useLocalTime;
@property (copy, nonatomic) NSString *hadDisplayThemeId;

+ (id)currentServerDate;
+ (id)sharedInstance;
+ (id)trackInfo;

- (void)registerThemeManager:(Class)a0;
- (BOOL)useNewThemeModel;
- (id)themeIdWithScene:(long long)a0 sceneString:(id)a1;
- (void)canShowTheme:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (void)storeRequestResult:(id)a0;
- (void)requestThemeDataWithCompletion:(id /* block */)a0;
- (id)themeModelWithThemeId:(id)a0;
- (void)didShowInterceptTheme:(id)a0;
- (void)addThemeShowCountWithTheme:(id)a0 context:(id)a1;
- (id)themeModelWithUserContext;
- (BOOL)isAvailableTimeForModel:(id)a0;
- (BOOL)isReachedMaxCountWithTheme:(id)a0;
- (void)clearPeriodIfNeededWithThemeId:(id)a0;
- (void)trackFreqWithTheme:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
