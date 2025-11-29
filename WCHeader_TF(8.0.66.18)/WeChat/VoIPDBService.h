@class VoIPDB, NSString;

@interface VoIPDBService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) VoIPDB *voipBaseDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)a0;
- (unsigned int)getRemoteUserIlinkExpireTime:(id)a0;
- (void)setRemoteUserIlinkStatus:(id)a0 sdkMode:(unsigned int)a1 liveTime:(unsigned int)a2;
- (BOOL)InsertVoIPMessageHistory:(id)a0 isFromServer:(BOOL)a1;
- (id)getMessageHistoryAtMost:(long long)a0;
- (BOOL)deleteVoIPMessageHistory:(id)a0;
- (void)DelAllMsg:(id)a0;
- (void)onDelMsg:(id)a0 msgList:(id)a1 deleteAll:(BOOL)a2;
- (void).cxx_destruct;

@end
