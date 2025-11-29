@class ShakeMsgNotifyMgr, NSString, ShakePeopleStorage, ShakeTvStorage, ShakeMusicStorage;

@interface ShakeMgr : MMUserService <ShakeMsgNotifyMgrDelegate, MMServiceProtocol> {
    long long m_shakeType;
    ShakePeopleStorage *m_peopleStorage;
    ShakeMusicStorage *m_musicStorage;
    ShakeTvStorage *m_tvStorage;
    long long m_peopleStorageRefCount;
    long long m_pageStorageRefCount;
    long long m_musicStorageRefCount;
    long long m_tvStorageRefCount;
    long long m_shakeShareStorageRefCount;
    ShakeMsgNotifyMgr *m_shakeMsgNotifyMgr;
    long long m_scene;
    NSString *m_sessionId;
    long long m_shakeTimestamp;
    NSString *m_shakeSessionId;
}

@property (nonatomic) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)shakeSwitch:(long long)a0;
- (long long)getShakeType;
- (BOOL)canShowPeople;
- (BOOL)canShowShakeMusic;
- (BOOL)isShakeEnable;
- (BOOL)isShakeMusicOversea;
- (long long)getSoundStatus;
- (void)setSoundStatus:(long long)a0;
- (void)LoadPeopleStorage;
- (id)getPeopleStorage;
- (void)SavePeopleStorage:(BOOL)a0;
- (void)ClearPeopleStorage;
- (void)LoadMusicStorage;
- (id)getMusicStorage;
- (void)SaveMusicStorage:(BOOL)a0;
- (void)ClearMusicStorage;
- (void)LoadTvStorage;
- (id)getTvStorage;
- (void)SaveTvStorage:(BOOL)a0;
- (void)ClearTvStorage;
- (void)beginTvStorage;
- (void)endTvStorage;
- (void)beginPeopleStorage;
- (void)endPeopleStorage;
- (void)beginMusicStorage;
- (void)endMusicStorage;
- (BOOL)hasUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (id)getUnreadMessages;
- (id)getLastestUnreadMessage;
- (id)getUnreadMsgPidDesc;
- (id)getMessagesFrom:(id)a0 maxCount:(unsigned int)a1;
- (void)markMessageListRead:(id)a0;
- (void)deleteMessageItem:(id)a0;
- (void)deleteAllMessages;
- (void)insertMsgItem:(id)a0;
- (void)onShakeMsgUnreadCountChanged;
- (void)setShakeScene:(long long)a0;
- (long long)getShakeScene;
- (void)setSessionId:(id)a0;
- (id)getSessionId;
- (void)setShakeSessionId:(id)a0;
- (id)getShakeSessionId;
- (void)setShakeTimestamp:(long long)a0;
- (long long)getShakeTimestamp;
- (void)jumpFromScene:(long long)a0;
- (void).cxx_destruct;

@end
