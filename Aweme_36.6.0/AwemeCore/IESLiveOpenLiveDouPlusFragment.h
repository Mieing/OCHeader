@class IESLiveWebpLoadingView, HTSEventContext, IESLiveGuideModel, NSString, IESLiveGuideToolBarItem, AWELiveDouPlusDataController;
@protocol IESLiveGuideDetailRouter, IESLiveGuideToolBarProvider, IESLiveDouPlusService, IESLiveCompoundSubscription, IESLivePerfSampler;

@interface IESLiveOpenLiveDouPlusFragment : IESLiveGuideComponent <IESLiveDouPlusMonitor, IESLiveGuideShopEntryAction, IESLiveGuideLocalLifeAction>

@property (retain, nonatomic) IESLiveGuideToolBarItem *douPlusItem;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) AWELiveDouPlusDataController *dataController;
@property (retain, nonatomic) id<IESLiveDouPlusService> douPlusService;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) id<IESLiveGuideDetailRouter> detailRouter;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> guideToolbarProvider;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) HTSEventContext *trackerContext;
@property (nonatomic) BOOL didHideOpenLiveDouPlusFragment;
@property (nonatomic) long long entranceShowing;
@property (nonatomic) double lastClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)getTrackParamsWithItem:(id)a0;
- (id)_getCurrentSecUid;
- (id)_currentUserId;
- (void)goodsDidChangeWithEmpty:(BOOL)a0;
- (void)localLifeChangeWithEmpty:(BOOL)a0;
- (void)monitorDouPlusRemoveFromToolBar;
- (BOOL)showLocalAdsFromLocalAdsUserTag;
- (void)_trackDouPlusEvent:(id)a0 params:(id)a1 suiXinTui:(BOOL)a2;
- (void)douPlusClick;
- (void)douplusItemClicik:(id)a0;
- (void)restoreDouPlusToolbarItem;
- (void)refreshBubble;
- (void)showSuiXinTuiWithQueryParams:(id)a0;
- (void)addDouPlusGuideToolbarItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupUI;

@end
