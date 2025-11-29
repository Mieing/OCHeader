@class AWEIMMessageBaseViewController, NSString, AWEIMInputFAQListViewModel, AWEIMLiveCustomServiceFloatNavigationBar;

@interface AWEIMLiveCustomServiceInteractor : AWEIMComponentBase <AWEIMInputFAQListViewModelDelegate, AWEIMLiveCustomServiceInteractorInterface>

@property (retain, nonatomic) AWEIMInputFAQListViewModel *faqListViewModel;
@property (retain, nonatomic) AWEIMLiveCustomServiceFloatNavigationBar *customNaviBar;
@property (weak, nonatomic) AWEIMMessageBaseViewController *messageViewController;
@property (nonatomic) BOOL isMutedByIM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isOpenFromLive;
@property (readonly, nonatomic) NSString *openPlatformSource;
@property (readonly, nonatomic) BOOL isCutsomServiceChat;
@property (readonly, nonatomic) BOOL isPanBackEnable;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)p_updateNaviBar;
- (void)p_setupNaviBar;
- (id)p_trackCommonParams;
- (void)p_setLiveMuted:(BOOL)a0;
- (id)inputActionBarInteractor;
- (BOOL)shouldSendUserActionWithModel:(id)a0;
- (id)historyCustomizedParamsFromModel:(id)a0;
- (BOOL)isEnterConFirstTimeWithModel:(id)a0;
- (void)updateNaviTitle:(id)a0;
- (void)transferToLiveConsultDetail;
- (void)trackClickAlbum;
- (void)trackClickCamera;
- (void)didSelectedEntity:(id)a0 inActionBar:(BOOL)a1;
- (void)p_startFetchCustomServiceFAQList;
- (BOOL)isNeedFloat;
- (id)innerNavi;
- (id)outerNavi;
- (void)p_trackBackButtonClick;
- (void)p_setupFAQViewWithModel:(id)a0;
- (void)p_trackLiveIMFunction:(id)a0 action:(long long)a1;
- (void)p_trackDetailButtonClick;
- (void).cxx_destruct;
- (void)dealloc;
- (id)inputVC;

@end
