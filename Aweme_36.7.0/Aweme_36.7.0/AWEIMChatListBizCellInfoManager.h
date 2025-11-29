@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEIMChatListBizCellInfoManager : AWEIMComponentBase <AWEIMChatListBizCellInfoManagerInterface, AWEIMEnterMessageTabComboRequestProtocol, AWEIMMessageTabChatDataAction, AWEUserMessage>

@property (retain, nonatomic) NSMutableDictionary *bizDict;
@property (retain, nonatomic) NSMutableDictionary *sessionIDToBizIDDict;
@property (copy, nonatomic) NSDictionary *bizIDCellInfoDict;
@property (nonatomic) BOOL initialComponentAllResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clz_updateCellInfoWithType:(long long)a0 withValue:(long long)a1 forBusinessID:(id)a2 source:(id)a3 ext:(id)a4;
+ (id)storageKeyForCurrentUser;
+ (id)cachedCellInfoForBusiness:(id)a0;
+ (id)clz_manulUpdateCellInfoWithType:(long long)a0 withValue:(long long)a1 forBusinessID:(id)a2 ext:(id)a3;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)registerSessionID:(id)a0 withBusinessID:(id)a1;
- (void)registerChatListCellInfoBusiness:(id)a0;
- (BOOL)isRegisteredSessionID:(id)a0;
- (BOOL)isRegisteredBusinessID:(id)a0;
- (BOOL)enableCustomDealUpdateWithSessionID:(id)a0;
- (void)updateCellInfoTypeByCustom:(long long)a0 withValue:(id)a1 sessionID:(id)a2;
- (void)updateStickOnTopState:(BOOL)a0 withSessionID:(id)a1 completion:(id /* block */)a2;
- (void)refreshInfoForCellWithBizID:(id)a0;
- (id)ins_updateCellInfoWithType:(long long)a0 withValue:(long long)a1 forBusinessID:(id)a2 source:(id)a3 ext:(id)a4;
- (id)getChatListCellInfoForBusiness:(id)a0;
- (id)getChatListCellInfoForSession:(id)a0;
- (void)updateStickOnTopState:(BOOL)a0 withBusinessID:(id)a1 completion:(id /* block */)a2;
- (id)willInsertChat:(id)a0;
- (void)loadInfoForCellWithSessionID:(id)a0 callDelegate:(BOOL)a1;
- (void)searchBusinessServices;
- (void)loadCellInfoWithNoti:(id)a0;
- (void)loadInfoForCellWithBizID:(id)a0 callDelegate:(BOOL)a1;
- (void)p_updateBusinessCellInfo:(id)a0 withBusinessID:(id)a1 reason:(unsigned long long)a2;
- (void)updateStickOnTopState:(BOOL)a0 withBusinessID:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (void)updateStickOnTopState:(BOOL)a0 withSessionID:(id)a1 source:(id)a2 completion:(id /* block */)a3;
- (id)requestParamsDictionary;
- (void).cxx_destruct;
- (id)responseKey;
- (id)requestKey;
- (void)handleResponseDictionary:(id)a0;
- (void)dealloc;
- (void)reloadCache;

@end
