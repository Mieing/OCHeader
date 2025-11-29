@class NSString, NSArray;

@interface DeviceRankSnsMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    NSArray *m_focusArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)likeFriendRank:(id)a0 FriendUsernames:(id)a1 brandUserName:(id)a2 optype:(unsigned int)a3;
- (void)getUserRankListCount:(id)a0 brandUserName:(id)a1;
- (id)loadFocusArray;
- (void)saveFoucsArray:(id)a0;
- (void)tryLoadFocusArray;
- (id)getFocusArrayFilePath;
- (void)handleRankAddLikeResponse:(id)a0;
- (void)callExtensionOnReceivedCGIResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
