@class NSTimer, NSString, AWEShowMonetizeAnnieXCardTrackInfo;

@interface AWEShowMonetizeAnnieXCardTrackPlugin : NSObject <AWEShowMonetizeAnnieXCardPlugin>

@property (retain, nonatomic) AWEShowMonetizeAnnieXCardTrackInfo *trackInfo;
@property (retain, nonatomic) NSTimer *loadTimeoutTimer;
@property (copy, nonatomic) id /* block */ trackParamHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)releaseTimeoutTimer;
- (void)monetizeAnnieXCardBizDidFinishLoad:(id)a0 params:(id)a1;
- (id)initWithTrackParamHandler:(id /* block */)a0;
- (void)monetizeAnnieXCardWillLoad:(id)a0;
- (void)monetizeAnnieXCardWillBizLoad:(id)a0;
- (BOOL)enablePreloadWithAnnieXCard:(id)a0;
- (void)handleEventForWillLoad;
- (void)trackPaidContentBlockOrderPageReady;
- (void)trackClickOrderPageStatusForLoadSuccessWithExtraParams:(id)a0;
- (void)trackPaidContentBlockOrderPageFailWithReason:(id)a0 failInfo:(id)a1 extraParams:(id)a2;
- (void)trackClickOrderPageStatusForLoadError:(id)a0 extraParams:(id)a1;
- (void)trackClickOrderPageStatusWithExtraParams:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createTimeoutTimer;

@end
