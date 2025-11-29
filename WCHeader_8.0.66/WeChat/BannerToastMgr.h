@class NSString, NSMutableArray, NSMutableDictionary;

@interface BannerToastMgr : MMUserService <MMServiceProtocol, IMsgExt> {
    NSMutableArray *m_msgDic;
    NSMutableDictionary *m_friendRecommandMsgs;
    NSMutableDictionary *m_dicSecurityBannerMsgs;
    NSMutableDictionary *m_dicPersistentSecurityBannerMsgs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getShowMsg;
- (void)trigBanner;
- (id)getRootDir;
- (id)pathForBannerMsg;
- (void)saveMsgs;
- (void)saveOneMsg:(id)a0;
- (void)loadMsgs;
- (id)makeMsgByType:(int)a0;
- (void)handleBannerMsg:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (BOOL)shouldRecommandFriendToUser:(id)a0;
- (void)deleteRecommandFriendMsg:(id)a0;
- (void)saveFriendRecMsgs;
- (void)loadFriendRecMsgs;
- (id)pathForFriendRec;
- (void)savePersistentSecurityBannerMsgs;
- (void)loadPersistentSecurityBannerMsgs;
- (void)filterSecurityBannerMsgs;
- (id)pathForPersistentSecurityBannerMsgs;
- (BOOL)shouldShowSecurityBannerToUser:(id)a0;
- (id)getSecurityBannerData:(id)a0;
- (void)deleteSecurityBannerMsg:(id)a0;
- (void)logMainFrameBanner:(unsigned int)a0 opType:(unsigned int)a1;
- (void)logRecommandFriendBanner:(id)a0 opType:(unsigned int)a1 recCount:(unsigned int)a2;
- (void)logUniDirectionFriendBanner:(id)a0 opType:(unsigned int)a1;
- (void).cxx_destruct;

@end
