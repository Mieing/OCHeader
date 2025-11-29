@class IESECEventPublisher, NSString, IESECInvocationPublisher, IESECLiveGoodsListCollectionService;
@protocol IESECLiveGoodsListHeaderComponentDelegate;

@interface IESECLiveGoodsListHeaderService : IESECLiveGoodsListBaseServiceV2 <IESECLiveListViewModelDelegateV2>

@property (weak, nonatomic) IESECLiveGoodsListCollectionService *collectionService;
@property (nonatomic) BOOL isShowingBanner;
@property (nonatomic) BOOL isShowingTab;
@property (retain, nonatomic) IESECInvocationPublisher<IESECLiveGoodsListHeaderComponentDelegate> *headerUpdatePublisher;
@property (retain, nonatomic) IESECEventPublisher *didUpdateFirstPageInfoEvent;
@property (retain, nonatomic) IESECEventPublisher *bannerOrTabStatusChangedEvent;
@property (retain, nonatomic) IESECEventPublisher *introduceBannerStatusChangedEvent;
@property (nonatomic) BOOL isShowingIntroducingBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshListBanner;
- (id)p_listEnvironment;
- (void)goodListDidStartMainFetchWithInfo:(id)a0;
- (void)mainFetchSuccessWithState:(id)a0;
- (void)didUpdateFirstPageInfo;
- (void)didTabDataRefreshWithTabSwitched:(BOOL)a0;
- (id)tabProductIDsAtTabIndex:(long long)a0;
- (void)dataStore:(id)a0 appendGoodsListModel:(id)a1;
- (void)dataStore:(id)a0 didUpdateTabList:(id)a1;
- (void)dataStore:(id)a0 didUpdateSelectedIndex:(long long)a1;
- (void)requestTabDataWithTabIndex:(long long)a0;
- (id)p_couponRouter;
- (void)updateBannerIfNeededWithTabSwitched:(BOOL)a0;
- (void)updateTopVibeWithVibeModels:(id)a0 cancelCurrent:(BOOL)a1;
- (void)updateIntroduceBannerWithRefreshScene:(long long)a0;
- (void)autoApplyCounponWithModel:(id)a0;
- (void)p_trackTabItem:(id)a0 event:(id)a1 btmModel:(id)a2 index:(long long)a3;
- (void)p_delegateUpdateTopVibeWithExtraInfo:(id)a0;
- (id)searchBarParams;
- (void)didShowTabAtIndex:(long long)a0 tabModel:(id)a1 btmModel:(id)a2;
- (void)didClickTabAtIndex:(long long)a0 tabModel:(id)a1 btmModel:(id)a2;
- (void)updateTopVibeWithMsgData:(id)a0;
- (void).cxx_destruct;

@end
