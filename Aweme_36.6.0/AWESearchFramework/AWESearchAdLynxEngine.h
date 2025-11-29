@class NSString, AWEAdGeneralSearchLynxComponentMonitorContext;

@interface AWESearchAdLynxEngine : AWESearchDynamicEngine <AWESearchDynamicEngineDelegate>

@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *adLynxMonitorContext;
@property (nonatomic) long long loadStartFirstScreenTimeStamp;
@property (nonatomic) double loadStartTimeStamp;
@property (nonatomic) BOOL showEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)containerDidFirstScreen:(id)a0;
- (void)didEndShowing:(unsigned long long)a0;
- (void)setAdInfoWithLynxView:(id)a0;
- (void)updateAdLynxMonitorContext;
- (id)createAdLynxMonitorContext;
- (id)currentAdAwemeModel;
- (void)updateOriginAdInfoShowedBefore:(BOOL)a0;
- (void)getAdDataFromCommerceCardModel:(id *)a0 rawAdData:(id *)a1 adData:(id *)a2;
- (void)commerceLynxShowMonitor;
- (void)handleTransToTop:(id)a0;
- (void)handleAdSearchOpenLongPressFeedbackPanel:(id)a0;
- (id)initWithModel:(id)a0 preferWidth:(double)a1 useBullet:(BOOL)a2 shouldReuseLynxView:(BOOL)a3 reuseMethod:(long long)a4;
- (void)sendShowEvent:(id)a0;
- (void)postAdPreloadResult;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithBuilder:(id /* block */)a0;
- (void)updateWithModel:(id)a0;

@end
