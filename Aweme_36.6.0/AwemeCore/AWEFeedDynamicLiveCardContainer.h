@class NSString, AWEAwemeModel, UIView, NSMutableArray;
@protocol AWEFeedDynamicCardManagerProtocol, IESHYContainerProtocol, AWEBottomContainerViewLifeCycleDelegate;

@interface AWEFeedDynamicLiveCardContainer : UIView <IESHYHybridViewLifecycleProtocol, AWEFeedDynamicContainerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (nonatomic) BOOL hasLoadFinish;
@property (retain, nonatomic) NSMutableArray *missingSelectors;
@property (weak, nonatomic) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (nonatomic) BOOL useNewLifeCycleMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double loadStartTime;
@property (retain, nonatomic) id<AWEFeedDynamicCardManagerProtocol> cardManager;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)initialData;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)sendEvent:(id)a0 withParams:(id)a1;
- (void)updateData:(id)a0 extraParams:(id)a1;
- (void)trackLoadResultWithURL:(id)a0 error:(id)a1;
- (void)trackFELoadResult:(id)a0 isSuccess:(BOOL)a1;
- (void)containerLoadFinish;
- (void).cxx_destruct;
- (void)createContainer;

@end
