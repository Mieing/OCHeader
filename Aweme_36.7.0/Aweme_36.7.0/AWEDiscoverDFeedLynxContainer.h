@class NSString, AWEAwemeModel, UIView, AWEDiscoverDHorizontalLynxCard;
@protocol AWEFeedDynamicCardManagerProtocol, AWEDiscoverDHorizontalViewProtocol, AWEBottomContainerViewLifeCycleDelegate;

@interface AWEDiscoverDFeedLynxContainer : AWEBottomContainerBaseView <AWEFeedDynamicContainerProtocol>

@property (retain, nonatomic) UIView<AWEDiscoverDHorizontalViewProtocol> *horizontalView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEDiscoverDHorizontalLynxCard *card;
@property (nonatomic) BOOL hasUpdateData;
@property (nonatomic) double loadStartTime;
@property (weak, nonatomic) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (nonatomic) BOOL useNewLifeCycleMethod;
@property (retain, nonatomic) id<AWEFeedDynamicCardManagerProtocol> cardManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoWillPlay;
- (void)videoWillStop;
- (id)generateContext;
- (id)customerComponentKeyClassPairToRegister;
- (id)globalPropsForInitialize;
- (void)loadTemplateURLWithRawData:(id)a0 extraInfo:(id)a1;
- (void)updateWithRawData:(id)a0 extraParams:(id)a1;
- (void)registerBridges;
- (void)updateHorizontalCardIfNeed;
- (void)sendEvent:(id)a0 withParams:(id)a1;
- (void)updateData:(id)a0 extraParams:(id)a1;
- (void)trackLoadResultWithURL:(id)a0 error:(id)a1;
- (void)trackFELoadResult:(id)a0 isSuccess:(BOOL)a1;
- (void)containerLoadFinish;
- (void)viewWillReset;
- (void).cxx_destruct;
- (id)templateURL;
- (void)dealloc;

@end
