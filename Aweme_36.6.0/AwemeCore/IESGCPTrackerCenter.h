@class NSString, NSPointerArray, NSDictionary, NSMutableArray, IESGCPTrackerViewExposePatroller;
@protocol IESGCPTrackerService;

@interface IESGCPTrackerCenter : NSObject

@property (retain, nonatomic) IESGCPTrackerViewExposePatroller *patroller;
@property (retain, nonatomic) NSPointerArray *pageNodeStack;
@property (copy, nonatomic) NSDictionary *lastClickRouteDic;
@property (copy, nonatomic) NSString *lastClickSourceBTMToken;
@property (retain, nonatomic) NSMutableArray *appResignActiveTimeArray;
@property (nonatomic) BOOL enableTrackerOpt;
@property (weak, nonatomic) id<IESGCPTrackerService> trackerService;
@property (nonatomic) BOOL enableClickEventInterceptOpt;

+ (BOOL)trackerEnable;
+ (BOOL)isSettingEnableTrackerOpt;
+ (BOOL)isSettingEnableClickInterceptOpt;
+ (id)sharedInstance;

- (void)reportEventWithNode:(id)a0 action:(long long)a1;
- (id)createTrackerNodeWithView:(id)a0 builder:(id /* block */)a1;
- (void)startViewExposePatrol;
- (void)createViewInterceptorWithView:(id)a0 forNode:(id)a1;
- (id)lastClickTrackRouteParamsWithNode:(id)a0;
- (id)trackEventNameWithNodeType:(long long)a0 action:(long long)a1;
- (id)trackEventParamsWithNode:(id)a0 action:(long long)a1;
- (void)reportCustomEventWithEventName:(id)a0 params:(id)a1;
- (id)commonParamsWithDIContext:(id)a0;
- (id)stackTopPageNode;
- (void)trackerEventDidTiggeredWithNode:(id)a0 action:(long long)a1;
- (id)addPrefixForString:(id)a0;
- (void)buildRouteParamsIfNeedForPageNode:(id)a0;
- (void)pushPageNode:(id)a0;
- (void)popPageNode:(id)a0;
- (void)stopViewExposePatrol;
- (void)compactPageNodeStack;
- (void)makeViewTrackNodeWithView:(id)a0 builder:(id /* block */)a1;
- (void)reportEventManualWithView:(id)a0 action:(long long)a1;
- (id)trackEventNameWithView:(id)a0 action:(long long)a1;
- (id)trackResultEventName;
- (id)trackEventParamsWithView:(id)a0 action:(long long)a1;
- (id)getResultEventParamsWithView:(id)a0 action:(long long)a1 resultName:(id)a2 resultAttr:(id)a3;
- (id)lastClickTrackRouteParams;
- (void)markLastClickNodeManual:(id)a0;
- (id)getCurrentPageRouteParamsWithView:(id)a0;
- (void)markPatrolIfNeeded;
- (void)pushVirtualPageNodeWithView:(id)a0;
- (void)popVirtualPageNodeWithView:(id)a0;
- (void)setTempVar:(id)a0 forKey:(id)a1 attachToObject:(id)a2;
- (id)getTempVarForKey:(id)a0 attachToObject:(id)a1;
- (void).cxx_destruct;
- (void)appDidBecomeActive;
- (void)addObservers;
- (void)removeObservers;
- (void)appWillResignActive;

@end
