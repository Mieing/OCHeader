@class NSString, TemplateMsgSearchHelper;

@interface TemplateMsgSubViewController : BaseMsgContentViewController <TemplateMsgSearchHelperDelegate, WASessionArrowTitleViewDelegate, MessageNodeViewDelegate>

@property (retain, nonatomic) TemplateMsgSearchHelper *searchHelper;
@property (retain, nonatomic) NSString *templateSessionId;
@property (nonatomic) unsigned int enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)initNavigationRightBarButton;
- (void)onClickHeaderBar:(id)a0;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillPop:(BOOL)a0;
- (double)getTipsHeight;
- (void)didReceiveMemoryWarning;
- (void)onSettingButton:(id)a0;
- (void)reloadTabeView;
- (void)onSearchButton:(id)a0;
- (void)onTableEndScroll;
- (void)makeNotifyMsgExpose;
- (void)msgSearchBarActive;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)a0 indexPath:(id)a1 arrKeyword:(id)a2;
- (BOOL)isServiceNotificationFirstLevelPage;
- (void)reloadNodeWithMessageWrap:(id)a0;
- (void)updateTitleView:(id)a0 ignoreAnimation:(BOOL)a1;
- (void)updateTitleAndSubTitleView:(id)a0;
- (void)onClickTitle;
- (BOOL)isScanOrScheduleSessionId:(id)a0;
- (void)reportServerNotifySubscribeMessageOp:(unsigned int)a0 viewModel:(id)a1 reportModel:(id)a2;
- (void).cxx_destruct;

@end
