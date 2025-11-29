@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveRouteTracker : NSObject <IESLiveRouteTrackService>

@property (nonatomic) long long maxMemory;
@property (nonatomic) long long increment;
@property (retain, nonatomic) NSString *maxIdentifier;
@property (retain, nonatomic) NSMutableArray *handlerQueue;
@property (retain, nonatomic) NSMutableDictionary *trackModules;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routeTrackingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad_SchemaTrack;
+ (id)sharedInstance;

- (id)modulesIncrease;
- (void)routeTrackWithArguments:(id)a0;
- (void)handleTrackModuleClose;
- (void)live_takeover_liveGoodsListWillAppear;
- (void)live_takeover_liveGoodsListDidDisappear;
- (void)live_takeover_dismissWithAnimated:(BOOL)a0 animator:(id)a1 closeType:(long long)a2 completion:(id /* block */)a3;
- (id)calculateFragmentIncrement:(id)a0 destSnapshot:(id)a1;
- (void)dequeueModules;
- (void)trackDisplayCard:(id)a0;
- (void)trackDismisCard:(id)a0;
- (id)componentsWithURLString:(id)a0;
- (void)enqueueModules:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
