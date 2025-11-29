@class NSMutableArray, NSString, IESGCPExplainCardAnimationQueue, IESGCPExplainCardStore, IESGCPExplainCardLynxContainerView;
@protocol IESGCPLiveExplainCardContainerService;

@interface IESGCPExplainCardWidget : IESGCPBaseWidget <IESGCPExplainCardLynxContainerViewDelegate, IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPExplainCardStore *store;
@property (retain, nonatomic) IESGCPExplainCardAnimationQueue *animationQueue;
@property (retain, nonatomic) id<IESGCPLiveExplainCardContainerService> explainCardContainer;
@property (retain, nonatomic) IESGCPExplainCardLynxContainerView *explainCardContainerView;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)bindActions;
- (void)registerEventSubscriber;
- (void)unregisterEventSubscriber;
- (void)explainCardLynxViewDidLoadFailedWithError:(id)a0;
- (void)dismissCurrentExplainCardWithNeedAnimation:(BOOL)a0 isReplace:(BOOL)a1;
- (void)handleExplainCardUpdateAction:(id)a0;
- (void)showExplainCardWithAction:(id)a0;
- (void)updateExplainCardWithData:(id)a0;
- (void)showContainerWithModel:(id)a0 needAnimation:(BOOL)a1 finishHandler:(id /* block */)a2;
- (void)updateDurationTrackerAttr;
- (void)reportExplainCardAddedResultWithModel:(id)a0 success:(BOOL)a1 state:(long long)a2;
- (BOOL)isCurrentExplainCardWithRoomID:(id)a0 uniqueKey:(id)a1;
- (double)mediaTimeWithDateTimestamp:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
