@class AWELivePreStreamLeftContainer, NSMapTable, AWELivePreStreamRightContainer, AWELivePreStreamAlertContainer, NSDictionary, AWELivePreStreamTopContainer, NSMutableArray, AWELivePreStreamTrackContextManager, UIView, NSString, AWELivePreStreamBottomContainer, AWEAwemeModel, NSArray, AWELivePreStreamCenterContainer;
@protocol AWELivePreStreamViewProtocol;

@interface AWELivePrestreamElementDispatcher : NSObject <AWELiveBaseElementProtocol>

@property (retain, nonatomic) NSArray *mStreamElements;
@property (retain, nonatomic) NSArray *businessStreamElement;
@property (readonly, nonatomic) NSMapTable *selectorCaches;
@property (retain, nonatomic) AWELivePreStreamTrackContextManager *trackContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *elementSchedulerOptConfig;
@property (retain, nonatomic) NSMutableArray *cacheEvent;
@property (retain, nonatomic) NSMutableArray *runningTaskArray;
@property (copy, nonatomic) NSString *schedulerSessionID;
@property (nonatomic) double allElementSetDataStartTime;
@property (nonatomic) double allElementSetDataCost;
@property (retain, nonatomic) NSMutableArray *executeElements;
@property (retain, nonatomic) AWELivePreStreamLeftContainer *leftContainer;
@property (retain, nonatomic) AWELivePreStreamTopContainer *topContainer;
@property (retain, nonatomic) AWELivePreStreamAlertContainer *businessElement;
@property (retain, nonatomic) AWELivePreStreamCenterContainer *centerContainer;
@property (retain, nonatomic) AWELivePreStreamRightContainer *rightContainer;
@property (retain, nonatomic) AWELivePreStreamBottomContainer *bottomNewContainer;
@property (retain, nonatomic) UIView<AWELivePreStreamViewProtocol> *streamView;
@property (retain, nonatomic) NSMutableArray *businessContainerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrackContext:(id)a0;
- (void)bizDowngradeWithData:(id)a0 andElement:(id)a1;
- (void)invokeTask:(id)a0 block:(id /* block */)a1 sessionID:(id)a2 element:(id)a3;
- (void)flushAllTaskIfNeeded:(id)a0;
- (void)flushAllTask:(id)a0;
- (void)cancelAllTask:(id)a0;
- (id)disableBreakupElements;
- (void)notifyAllTaskFinished;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
