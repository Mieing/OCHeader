@class IESLiveGuideInterceptViewModel, IESLiveGuideInterceptApi, NSString, BDXBridgeEventSubscriber, NSMutableSet, IESLiveGuideInterceptView, CreateInfoResponse_CreateInfo;

@interface IESLiveGuideInterceptFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideInterceptViewModelDelegate>

@property (retain, nonatomic) CreateInfoResponse_CreateInfo *model;
@property (retain, nonatomic) IESLiveGuideInterceptView *interceptView;
@property (retain, nonatomic) IESLiveGuideInterceptViewModel *viewModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL isShowedContentPanel;
@property (nonatomic) BOOL isPartnerPageShow;
@property (nonatomic) BOOL isAppeared;
@property (retain, nonatomic) IESLiveGuideInterceptApi *guideInterceptApi;
@property (retain, nonatomic) NSMutableSet *reportStrategyIdDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)unRegisterInterceptBridgeEventHandler;
- (void)fetchGuideInterceptInfo;
- (BOOL)shouldHideInterceptView;
- (void)initInterceptView;
- (void)subscribeBlockEvent;
- (void)reachReport:(id)a0;
- (void)showGuideInterceptView:(id)a0;
- (void).cxx_destruct;

@end
