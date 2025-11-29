@class AWEPlayletPageContext;

@interface AWEPlayletTracker : NSObject

@property (retain, nonatomic) AWEPlayletPageContext *context;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)trackPlayletApiMonitor:(long long)a0 fetchType:(long long)a1 error:(id)a2 errorType:(long long)a3 extraParams:(id)a4;

- (id)aAWEPadModuleAdapter;
- (id)commonParams;
- (id)commonParamsWithAweme:(id)a0;
- (void)trackEventWithName:(id)a0 params:(id)a1;
- (void)trackPlayletApiMonitor:(long long)a0 fetchType:(long long)a1 error:(id)a2 errorType:(long long)a3 extraParams:(id)a4;
- (void)trackEventStayPageWithDuration:(long long)a0;
- (void)trackTCPlayletStayTime:(long long)a0;
- (void)trackPlayletTabShowWithTopTabOrder:(long long)a0 enterWay:(id)a1;
- (id)commonParamsWithPlayletInfo:(id)a0;
- (void)trackPlayletCardShow:(id)a0 topTabOrder:(long long)a1 fromGroupId:(id)a2;
- (void)trackPlayletCardClick:(id)a0 topTabOrder:(long long)a1 fromGroupId:(id)a2;
- (void)trackPlayletChannelRefresh;
- (void)trackPlayletCardTagShow:(id)a0 extraParams:(id)a1;
- (void)trackPlayletCardTagClick:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
