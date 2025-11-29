@class UIViewController, NSString, NSDictionary, AWEAwemeModel, AWENearbyGrouponTabGuideModel, AWENearbyForwardTabManager, AWENearbyPageContext;
@protocol AWENearbyContainerChildProtocol;

@interface AWENearbyForwardTabDYLiteHandler : NSObject <AWENearbyResourceResponseProtocol, AWENearbyC2FeedEventMessage, AWENearbyForwardTabHandlerProtocol>

@property (retain, nonatomic) AWENearbyGrouponTabGuideModel *guideInfo;
@property (copy, nonatomic) NSDictionary *frequencyInfo;
@property (retain, nonatomic) AWEAwemeModel *lynxInsertFeedCardModel;
@property (nonatomic) long long calculateInsertDualFeedCardIndex;
@property (nonatomic) BOOL hasForwardClickEvent;
@property (nonatomic) BOOL needAvoidanceFloatView;
@property (nonatomic) BOOL hasDualFeedCardInsert;
@property (nonatomic) BOOL hasRecordDualFeedCard;
@property (retain, nonatomic) AWENearbyForwardTabManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (weak, nonatomic) UIViewController<AWENearbyContainerChildProtocol> *c2ViewController;

- (id)trackParams;
- (void)nearbylifeC2PageFetchFinish:(id)a0 resource:(id)a1 refreshContext:(id)a2 isRefresh:(BOOL)a3;
- (void)nearbyResourceResponse:(id)a0 refreshType:(unsigned long long)a1 pageType:(long long)a2 resourceTypes:(id)a3;
- (id)initWithPageContext:(id)a0 c2ViewController:(id)a1;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (void)setupBindObserver;
- (void)recordGrouponTabFrequency;
- (void)checkGrouponTabFrequency;
- (void)setupForwardTabInfoWithModel:(id)a0;
- (id)compnonentId;
- (void).cxx_destruct;
- (void)initManager;
- (void)dealloc;
- (id)getContext;

@end
