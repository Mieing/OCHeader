@class UIWindow, TTAdSplashModel, NSDictionary, NSMutableDictionary, UIView;

@interface BDASplashRealtimeTask : NSObject

@property (nonatomic) unsigned long long taskState;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSDictionary *preloadConfig;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIView *realTimeFakeLaunchView;
@property (retain, nonatomic) TTAdSplashModel *pickedModel;
@property (copy, nonatomic) id /* block */ displayCompletion;
@property (copy, nonatomic) id /* block */ checker;
@property (retain, nonatomic) NSMutableDictionary *timeNodes;
@property (retain, nonatomic) NSMutableDictionary *splashStates;
@property (nonatomic) unsigned long long finishReason;
@property (nonatomic) long long isHotLaunch;
@property (nonatomic) long long isRequestSuccess;
@property (nonatomic) double launchTime;
@property (nonatomic) long long cidCount;
@property (retain, nonatomic) TTAdSplashModel *trackPickedModel;
@property (copy, nonatomic) NSMutableDictionary *extraTrackInfo;

+ (void)trackRequestStatus:(long long)a0 isWarmStart:(BOOL)a1;
+ (id)sharedInstance;

- (void)removeFakeLaunchView;
- (void)feedDidAppear;
- (void)addTrackInfo:(id)a0;
- (void)setRenderTimeNodeWithResourceType:(unsigned long long)a0;
- (void)realtimeSplashTimeStart;
- (BOOL)newRealtimeTaskWithConfig:(id)a0;
- (id)getRealtimeRequestInfo;
- (void)realtimeRequest;
- (void)realtimeRequestResult:(BOOL)a0 jsonData:(id)a1;
- (BOOL)realtimeSplashTaskStartOnWindow:(id)a0 isBlocked:(BOOL)a1 checker:(id /* block */)a2 isWarmStart:(BOOL)a3 launchTime:(double)a4 displayCompletion:(id /* block */)a5;
- (void)setTimeNode:(unsigned long long)a0;
- (void)releaseRealtimeTask;
- (BOOL)canRequestRealtime;
- (void)setSplashState:(unsigned long long)a0 value:(unsigned long long)a1;
- (void)displaySplashWithModel:(id)a0 finishReason:(unsigned long long)a1;
- (void)addFakeLaunchView;
- (BOOL)shouldParseWithJsonData:(id)a0;
- (id)parseWithJsonData:(id)a0;
- (void)trackDelayed;
- (long long)splashCanShowWithModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSplashFrame;
- (void)clearAllRealtimeCache;
- (void).cxx_destruct;
- (void)clearState;
- (void)track;

@end
