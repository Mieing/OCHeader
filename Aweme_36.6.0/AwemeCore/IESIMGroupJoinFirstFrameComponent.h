@class AWEIMEnterChatMetricsV2Tracker, NSString;

@interface IESIMGroupJoinFirstFrameComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (nonatomic) BOOL firedFirstReloadNonNoticeDataTransaction;
@property (nonatomic) BOOL enterChatWhenJoinGroup;
@property (nonatomic) BOOL hasNonNoticeMsgInFirstLoad;
@property (nonatomic) BOOL didUpload;
@property (nonatomic) long long firstNonNoticeMsgTransactionEndTime;
@property (retain, nonatomic) AWEIMEnterChatMetricsV2Tracker *enterChatTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)reloadDataTransactionCompleted;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)p_uploadMetrics;
- (BOOL)p_hasNonNoticeMessageInMsgList;
- (BOOL)p_hasNonNoticeMessageWithMessageGroups:(id)a0;
- (void).cxx_destruct;

@end
