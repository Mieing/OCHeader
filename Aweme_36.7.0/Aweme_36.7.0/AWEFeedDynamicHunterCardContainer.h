@class UIView, NSString, AWEAwemeModel;
@protocol AWEFeedDynamicCardManagerProtocol, HunterContainerProtocol, AWEBottomContainerViewLifeCycleDelegate;

@interface AWEFeedDynamicHunterCardContainer : UIView <HunterContainerLifeCycleProtocol, AWEFeedDynamicContainerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *container;
@property (retain, nonatomic) id<AWEFeedDynamicCardManagerProtocol> cardManager;
@property (nonatomic) BOOL useNewLifeCycleMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double loadStartTime;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (id)hunterContainer;
- (void)configUI;
- (void)videoWillPlay;
- (void)videoWillStop;
- (id)globalPropsForInitialize;
- (void)sendEvent:(id)a0 withParams:(id)a1;
- (void)updateData:(id)a0 extraParams:(id)a1;
- (void)trackLoadResultWithURL:(id)a0 error:(id)a1;
- (void)trackFELoadResult:(id)a0 isSuccess:(BOOL)a1;
- (void)containerLoadFinish;
- (void)viewWillReset;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
