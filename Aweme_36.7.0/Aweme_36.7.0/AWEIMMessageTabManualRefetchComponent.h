@class NSString, UILabel, UIView, UIButton;
@protocol IESIMParticleLoadingProtocol;

@interface AWEIMMessageTabManualRefetchComponent : AWEIMComponentBase <IESIMChatDataManagerDelegate, AWEIMMessageTabManualRefetchInterace>

@property (retain, nonatomic) UIView *manualRefetchView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *refetchBtn;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UIView<IESIMParticleLoadingProtocol> *particleView;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) BOOL didTrackRefetchViewShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_chatDataManager:(id)a0 didStartSyncConversationListForUserInitialLogin:(id)a1;
- (void)iesim_chatDataManager:(id)a0 didFinishSyncConversationListForUserInitialLogin:(id)a1;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (id)hostVC;
- (BOOL)canShowManualRefetchFooterViewForTableView:(id)a0 inSection:(long long)a1;
- (BOOL)isManualRefetchFooterView:(id)a0;
- (void)willDisplayManualRefetchFooterView:(id)a0;
- (void)reloadManualRefetchViewIfNeeded:(id)a0;
- (void)didClickRefreshButton;
- (void).cxx_destruct;
- (id)footerView;
- (double)footerHeight;
- (void)setUpView;

@end
