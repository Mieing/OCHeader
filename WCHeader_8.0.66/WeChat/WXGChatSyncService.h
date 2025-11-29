@class NSString, NSMutableDictionary;

@interface WXGChatSyncService : MMUserService <IMsgExt, MMServiceProtocol> {
    unsigned int m_pcVersion;
    unsigned int m_macVersion;
    unsigned int m_iPadMinVersion;
}

@property (retain, nonatomic) NSMutableDictionary *deviceLogicMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned int)getPCVersion;
- (unsigned int)getMacVersion;
- (unsigned int)getiPadMinVersion;
- (void)setAllowSync:(BOOL)a0;
- (BOOL)getAllowSync;
- (id)getChatSyncLogicBy:(id)a0;
- (void)startSyncWithType:(unsigned long long)a0 withPemKey:(id)a1 withDeviceContext:(id)a2;
- (void)startSleepSyncWithExt:(id)a0 withPemKey:(id)a1 withDeviceContext:(id)a2;
- (void)startGetMoreSynceWithExt:(id)a0 withPemKey:(id)a1 withDeviceContext:(id)a2;
- (void)onRevChatSyncRequest:(id)a0 MsgWrap:(id)a1;
- (void)p_parseAppMsg:(id)a0;
- (void).cxx_destruct;

@end
