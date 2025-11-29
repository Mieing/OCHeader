@protocol AWEIronManService;

@interface AWEPadChannelUtils : NSObject

@property (retain, nonatomic) id<AWEIronManService> ironManService;

+ (BOOL)enablePadCinemaOpt;
+ (id)vsPlayScheduleSchema;
+ (long long)enterSceneForPageKey:(id)a0;
+ (BOOL)isApplicationLandScape;
+ (id)sharedInstance;

- (id)statusBarOrientationForIronMan;
- (id)configIronManScene:(id)a0 forScheme:(id)a1;
- (id)configIronManQueryParamWithEntry:(id)a0 forScheme:(id)a1;
- (id)microappAppendOrientationParams:(id)a0 extraParams:(id)a1;
- (id)getEnterMethodWithSectionIdentifier:(id)a0;
- (id)padMovieChannelIronManScene;
- (long long)indexForHorizontalBreakPoint:(long long)a0;
- (void).cxx_destruct;

@end
