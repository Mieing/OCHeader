@class NSString, EcsPresentEntrance;

@interface EcsGiftEntranceMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) EcsPresentEntrance *entranceData;
@property (nonatomic) int switchChatType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateWithEcsPresentEntranceInfo:(id)a0;
- (BOOL)shouldShowEntranceInSingleChat;
- (BOOL)shouldShowEntranceInGroupChat;
- (id)curEntranceLogStr;
- (id)singleChatJumpInfo;
- (id)groupChatJumpInfo;
- (id)nativeRouterJumpInfoWithRequestType:(unsigned long long)a0 isGroup:(BOOL)a1;
- (int)switchChatGift;
- (void)clearChatGift;
- (void)markHasClearRedDotInChatPlusIconWithGroupChat:(BOOL)a0;
- (void)markHasClearRedDotInChatGiftIconWithGroupChat:(BOOL)a0;
- (BOOL)shouldShowRedDotInChatPlusIcon:(BOOL)a0;
- (BOOL)shouldShowRedDotInChatGiftIcon:(BOOL)a0;
- (BOOL)shouldShowRedDot:(BOOL)a0 isChatGiftIcon:(BOOL)a1;
- (id)getEntranceInfo:(BOOL)a0;
- (id)getOldMMKVReddotKey:(BOOL)a0 isChatGiftIcon:(BOOL)a1;
- (id)getMMKVReddotKey:(BOOL)a0 isChatGiftIcon:(BOOL)a1;
- (void)resetGiftReddot;
- (void)clearOldGiftReddot;
- (unsigned int)getShouldPreloadImgType:(BOOL)a0;
- (unsigned int)getShouldShowCoverType:(BOOL)a0;
- (void).cxx_destruct;

@end
