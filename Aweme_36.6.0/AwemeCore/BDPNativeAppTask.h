@class BDPBootRouteInfoRecord, NSString, NSMutableDictionary, BDPInteractionPluginCanvasManager, BDPTimingEvent, NSMutableArray, BDPAppPageManager, BDPPromise;

@interface BDPNativeAppTask : BDPBasicAppTask <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) BDPAppPageManager *pageManager;
@property (retain, nonatomic) NSMutableArray *routeIDList;
@property (retain, nonatomic) NSMutableArray *pagePathList;
@property (retain, nonatomic) NSMutableDictionary *routeToIDListDic;
@property (retain, nonatomic) BDPBootRouteInfoRecord *bootRouteInfo;
@property (nonatomic) BOOL isFirstFrameShowed;
@property (nonatomic) BOOL isLCPArrived;
@property (nonatomic) double coldBootLcpDuration;
@property (nonatomic) BOOL readyToStartDynamicContainer;
@property (nonatomic) unsigned long long webviewRequestCountBeforeLCP;
@property (retain, nonatomic) BDPPromise *lineUpPromise;
@property (nonatomic) struct CGSize { double width; double height; } currentWindowSize;
@property (nonatomic) BOOL subscribeTemplateFetched;
@property (nonatomic) BOOL subscribeTipsShowed;
@property (nonatomic) BOOL isInteractionPlugin;
@property (retain, nonatomic) BDPInteractionPluginCanvasManager *interactionPluginCanvasManager;
@property (retain, nonatomic) BDPTimingEvent *stayDurationTiming;
@property (retain, nonatomic) BDPPromise *cutLossesPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)resetBootRouteInfoRecord:(id)a0;
- (id)addRouteWithCurrent:(id)a0 to:(id)a1 pagePath:(id)a2;
- (void)addRouteID:(id)a0 pagePath:(id)a1;
- (id)routeToPageInfoWithID:(id)a0;
- (void).cxx_destruct;
- (id)currentContext;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
