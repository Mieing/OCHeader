@class NSString, AWELeftSideBarCustomModuleItemDataModel, NSDictionary, UIView;
@protocol AWEIMSideNoticeViewControllerProtocol, AWEOfficialNotificationProtocol, AWELeftSideBarStencilCustomModuleViewProtocol;

@interface AWELeftSideBarNotificationModulePresenter : AWELeftSideBarBasePresenter <AWEOfficialNotificationOtherCountMessageProtocol, AWELeftSideBarMessageReachProtocol>

@property (retain, nonatomic) UIView<AWELeftSideBarStencilCustomModuleViewProtocol> *containerView;
@property (retain, nonatomic) AWELeftSideBarCustomModuleItemDataModel *dataModel;
@property (retain, nonatomic) id<AWEIMSideNoticeViewControllerProtocol> sideNoticeViewController;
@property (retain, nonatomic) id<AWEOfficialNotificationProtocol> notificationCountManager;
@property (nonatomic) unsigned long long showState;
@property (copy, nonatomic) NSDictionary *templateCount;
@property (nonatomic) BOOL isWaitingForCheckingCaption;
@property (nonatomic) BOOL isRedDotShowing;
@property (readonly, nonatomic) long long leftSideBarGroupType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)leftSideRedDotMigrateEnable;
+ (void)syncBadgeDidHideToRemote;
+ (BOOL)messageReachLeftSideBarClickDotClearEnable;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarViewWillDisAppear;
- (void)leftSideBarPresenterOnCreate;
- (id)leftSideBarListCellDataModel:(id)a0;
- (void)onOtherCountChangeReason:(unsigned long long)a0 model:(id)a1;
- (void)updateSideBarNoticeInfo:(id)a0 completion:(id /* block */)a1;
- (id)__entranceStoreKey;
- (void)__updateEntranceUnreadCount;
- (void)p_initContainerViewIfNeed;
- (void)__updateSideBarUnreadCount;
- (void)tryToShowCaption;
- (void)p_updateDotBadgeCompareTimeIfNeeded;
- (void)p_updateDotBadgeCompareTime;
- (id)getMsgList;
- (id)getLeftSideBarNotificationTemplateCount;
- (void)badgeDidHideWithSideBarOpen;
- (void).cxx_destruct;
- (void)dealloc;

@end
