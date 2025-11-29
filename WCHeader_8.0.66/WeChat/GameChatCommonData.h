@class GameChatErrorTipBar, NSMutableDictionary, NSString, SafeMutableDictionary, NSMutableArray, BanAction;

@interface GameChatCommonData : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) GameChatErrorTipBar *banBtn;
@property (retain, nonatomic) NSMutableDictionary *dbDataDict;
@property (retain, nonatomic) NSMutableArray *normalUserArray;
@property (nonatomic) double normalUserArrayTimeStamp;
@property (retain, nonatomic) NSString *topGroupName;
@property (retain, nonatomic) BanAction *banJoinGroup;
@property (retain, nonatomic) BanAction *banCreateGroup;
@property (retain, nonatomic) SafeMutableDictionary *recentlyTickleMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheKeyForChannelId:(long long)a0 chatRoomName:(id)a1 category:(id)a2;
- (id)getCachedMsgResponseOfChannel:(long long)a0 chatRoomName:(id)a1;
- (void)saveMsgResponse:(id)a0 ofChannel:(long long)a1 chatRoomName:(id)a2;
- (id)getCachedChannelInfo:(id)a0;
- (void)saveChannelInfo:(id)a0 chatRoomName:(id)a1;
- (id)init;
- (void)saveExpireRecordValue:(id)a0 maxAge:(double)a1 key:(id)a2;
- (id)getExpireRecordWithKey:(id)a0;
- (void)updateBanStatus:(id)a0;
- (void)showBanBtnWithText:(id)a0;
- (void)removeBanBtn;
- (BOOL)checkCanJoinGroup;
- (BOOL)checkBanAction:(id)a0;
- (BOOL)checkCanCreateGroup;
- (id)pbCategoryKey:(id)a0;
- (BOOL)isTimeExpired:(double)a0 expireTime:(double)a1 info:(id)a2;
- (BOOL)isDataExpired:(id)a0;
- (id)getChatRoomPbTable;
- (id)getChatRoomPbTableWithPrefix:(id)a0;
- (id)getPbOfCustomKey:(id)a0 pbClass:(Class)a1;
- (void)savePbMessage:(id)a0 withKey:(id)a1;
- (void)savePbMessage:(id)a0 withKey:(id)a1 expireDuration:(double)a2;
- (id)getPbOfCustomKey:(id)a0 pbClass:(Class)a1 tablePrefix:(id)a2;
- (id)getChatRoomDataOfCustomKey:(id)a0 pbClass:(Class)a1 tablePrefix:(id)a2;
- (void)savePbMessage:(id)a0 withKey:(id)a1 tablePrefix:(id)a2;
- (BOOL)removeAllChatRoomData;
- (void)savePbMessage:(id)a0 withKey:(id)a1 expireDuration:(double)a2 tablePrefix:(id)a3;
- (id)normalUserArray;
- (void)setNormalUserArray:(id)a0;
- (void).cxx_destruct;

@end
