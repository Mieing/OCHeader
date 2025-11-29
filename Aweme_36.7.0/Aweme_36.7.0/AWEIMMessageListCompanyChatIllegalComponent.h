@class NSString;

@interface AWEIMMessageListCompanyChatIllegalComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (nonatomic) BOOL checkedIllegalNoteMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (BOOL)p_needUpdateIlleralCacheWithMessageCreateTime:(long long)a0;
- (void)p_updateIllegalTime:(long long)a0;
- (void)p_postCompanyAccountSnapshot;
- (void)checkIllegalMessageGroup:(id)a0;
- (id)p_illegalSnapshotKey;

@end
