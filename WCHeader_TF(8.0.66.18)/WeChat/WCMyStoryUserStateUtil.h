@class NSString, MMUIViewController, NSArray, NSMutableSet, WCStoryNotifyHandler;

@interface WCMyStoryUserStateUtil : MMUserService <WCStoryFacadeExt, MMServiceProtocol, MMKernelExt>

@property (retain, nonatomic) NSString *selectedMember;
@property (weak, nonatomic) MMUIViewController *parentVC;
@property (copy, nonatomic) NSArray *currentUnReadStoryArray;
@property (nonatomic) BOOL waitingForShowPreview;
@property (retain, nonatomic) WCStoryNotifyHandler *syncNotifyHandler;
@property (retain, nonatomic) NSMutableSet *unreadStoryUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)refreshUnReadStoryWithAddArray:(id)a0 deleteArray:(id)a1;
- (void)notifyAddSyncWithUsername:(id)a0;
- (void)notifyRecoverStoryWithUsername:(id)a0;
- (void)notifyClearSyncWithUserName:(id)a0;
- (void)notifyUserDeleteStoryVideoWithUserName:(id)a0;
- (BOOL)checkUserInUnReadStoryListWithUserName:(id)a0;
- (BOOL)checkUserInUnReadStoryListWithUserNameInCache:(id)a0;
- (void)showStoryMovieWithUserName:(id)a0 previewReportObj:(id)a1 inViewController:(id)a2;
- (void)markUserStoryHasRead:(id)a0 maxTid:(id)a1;
- (void)notifyCheckSelector;
- (void)fetchNewStoryComment;
- (void)fetchNewStoryBubble;
- (void)onCleanUnReadStorys:(id)a0;
- (BOOL)isContactInBlackList:(id)a0;
- (BOOL)isUserNameInBlackList:(id)a0;
- (void)loadUnreadStoryUsersCache;
- (void)reloadUnreadCacheForUser:(id)a0;
- (int)getTimeZoneHourOffset;
- (void).cxx_destruct;

@end
