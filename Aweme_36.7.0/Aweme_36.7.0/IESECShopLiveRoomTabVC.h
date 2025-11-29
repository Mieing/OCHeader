@class UIView, NSString, IESECLiveRoomModel, NSError, IESECShopTabModel, IESECShopLiveTabExceptionView, IESECServiceProxy, IESECStorePageContext;
@protocol IESECAudienceAccessServiceSubscriber, IESECShopLiveTabService, IESECLiveAudienceAccessService, IESECShopLayoutService, IESECShopLiveRoomAccessServiceManager, IESECShopLiveRoomProfileView, IESECShopLiveRoomTipsViewProtocol, IESECShopLiveRoomBackViewProtocol, IESECShopStateService, IESECStoreContainerProtocol, IESECShopPageContextV2, IESECShopFollowService;

@interface IESECShopLiveRoomTabVC : IESECBaseShopTabViewController <IESECAudienceAccessServiceSubscriber, IESECShopEventSubscriber, IESECShopLiveTabExceptionViewDelegate, IESECShopTabElementProtocol> {
    id<IESECShopPageContextV2> _contextV2;
    BOOL _didBindLive;
    IESECShopTabModel *_tabModel;
    double _pageInitTime;
    double _pageReadyTime;
    double _reqXtabStartTime;
    double _reqXtabEndTime;
    double _pageShowTime;
    NSError *_reqXtabError;
    BOOL _blockEnterRoom;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFollowService> *followService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLiveTabService> *liveTabService;
@property (retain, nonatomic) id<IESECLiveAudienceAccessService> accessService;
@property (retain, nonatomic) id<IESECAudienceAccessServiceSubscriber> accessServiceSubscriber;
@property (retain, nonatomic) id<IESECShopLiveRoomAccessServiceManager> accessServiceManager;
@property (retain, nonatomic) IESECLiveRoomModel *roomModel;
@property (retain, nonatomic) UIView<IESECShopLiveRoomProfileView> *profileView;
@property (retain, nonatomic) UIView<IESECShopLiveRoomBackViewProtocol> *backView;
@property (retain, nonatomic) UIView<IESECShopLiveRoomTipsViewProtocol> *tipsView;
@property (retain, nonatomic) IESECShopLiveTabExceptionView *exceptionStatusView;
@property (retain, nonatomic) UIView<IESECShopLiveRoomBackViewProtocol> *exceptionBackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (weak, nonatomic) id<IESECStoreContainerProtocol> container;

- (void)audienceDidEnterRoom:(id)a0;
- (void)audienceFirstFrameDidReady:(id)a0;
- (void)audienceWillCloseRoom:(id)a0 withType:(unsigned long long)a1;
- (void)audienceDidCloseRoom:(id)a0 withType:(unsigned long long)a1;
- (void)audienceDeletedByLongPress:(id)a0;
- (void)audienceHasPopup:(BOOL)a0;
- (void)tabScrollViewDidScrollCallback:(id /* block */)a0;
- (id)tabScrollViews;
- (void)iesecshop_willEnterLiveRoomTab:(BOOL)a0;
- (void)iesecshop_didEnterLiveRoomTab:(BOOL)a0;
- (id)initWithContext:(id)a0 contextV2:(id)a1 container:(id)a2;
- (void)tryAccessBind;
- (void)hideExceptionViews;
- (void)updateAccessConfig;
- (void)setupExceptionViews;
- (void)showExceptionView:(unsigned long long)a0 isFirstLiveRoom:(BOOL)a1;
- (void)showToast:(unsigned long long)a0 isFirstLiveRoom:(BOOL)a1;
- (void)reportRenderFinishIfNeeded;
- (void)exitLiveRoom:(id)a0 withType:(unsigned long long)a1;
- (id)enterMethodWithSource:(unsigned long long)a0;
- (void)enterLiveAgain;
- (void)updateWithPreloadTabModel:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
