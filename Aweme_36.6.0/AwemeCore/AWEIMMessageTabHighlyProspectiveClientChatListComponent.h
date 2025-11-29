@class NSString, NSAttributedString;
@protocol IESIMB2CMessageTabViewControllerHeaderInfoInterface;

@interface AWEIMMessageTabHighlyProspectiveClientChatListComponent : AWEIMMessageTabCustomDataBaseListComponent <IESIMB2CMessageTabHighlyProspectiveDatasEventProtocol>

@property (copy, nonatomic) NSAttributedString *headerAttributeString;
@property (retain, nonatomic) id<IESIMB2CMessageTabViewControllerHeaderInfoInterface> headerInfoModel;
@property (nonatomic) BOOL hasTrackerShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didUpdateMessageTabHeaderTitleDatas:(id)a0;
- (id)createDataController;
- (void)openHighlyProspectiveStatus;
- (long long)currentWrapperType;
- (BOOL)enableShowHighlyProspectiveHeader;
- (void)trackerHighlyProspectiveHeaderShow;
- (void)listViewControllerWillDisappear:(long long)a0;
- (void)listViewControllerWillAppear:(long long)a0;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (BOOL)hideUnreadDot;
- (BOOL)enableShowChildViewController;
- (id)viewControllerIdentify;
- (BOOL)canShowHeaderInCurrentViewController;
- (id)viewControllerforSkeleton;
- (void)setupIndicatorModel:(id)a0;
- (id)tableViewHeaderInCurrentEntryType:(long long)a0 section:(long long)a1;
- (double)heightForTableViewHeaderInCurrentEntryType:(long long)a0 section:(long long)a1;
- (long long)entryType;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (long long)unreadCount;
- (id)title;
- (long long)indicatorType;
- (id)trackName;

@end
