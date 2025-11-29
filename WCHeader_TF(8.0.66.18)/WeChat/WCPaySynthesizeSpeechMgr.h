@class WCPaySynthesizeSpeechCgi, MPVolumeView, NSString, WavAudioPlayer;

@interface WCPaySynthesizeSpeechMgr : MMUserService <WCPayLogicMgrExt, WCPaySynthesizeSpeechCgiDelegate, IMsgExt, IMMAudioPlayerQueueExt, MMKernelExt, MMServiceProtocol, VoIPPushKitExt>

@property (retain, nonatomic) WCPaySynthesizeSpeechCgi *m_voiceCgi;
@property (retain, nonatomic) MPVolumeView *m_privateVoulmeView;
@property (nonatomic) float m_lastVolume;
@property (nonatomic) double m_volumeViewSupportMinVersion;
@property (nonatomic) double m_volumeViewSupportMaxVersion;
@property (retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)checkVolumViewSupportVersion;
- (void)onServiceInit;
- (void)checkMainPosAndExtensionPosIsSame;
- (void)onAuthOK;
- (void)saveNSEShareUserData;
- (void)deleteSounsData;
- (void)showLocalNotification:(id)a0 isVoiceReqSuccess:(BOOL)a1;
- (void)onReceiveVoIPPushInfo:(id)a0;
- (void)checkSwitchStatsAndRequestSpeech:(id)a0;
- (void)requestLocalSpeechSynthesize:(id)a0;
- (void)setAudioSessionActive;
- (void)checkAndSaveDefaultSpeechPos;
- (void)playLocalSpeech:(id)a0;
- (id)getConfigKey;
- (id)getCurrentSpeechConfig;
- (void)removeCurrentSpeechConfig;
- (void)requestForSynthesizeSpeech:(id)a0;
- (void)OnGetWCPayVoiceRespOK:(id)a0;
- (void)OnGetWCPayVoiceRespErrorWithSpeechMsg:(id)a0;
- (void)playSynthesizeSound:(id)a0;
- (void)forceSetVolumeView;
- (void)removeVolumeView;
- (void)forceSetSystemVolume;
- (void)onMMAudioPlayerQueuePlayEnd;
- (void)setSystemVolume:(float)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)PushLocalNotification:(id)a0 identifier:(id)a1;
- (void)OnGetWCPayExtensionInfoMsg:(id)a0;
- (void)OnNotifyAddFacingReceiveMoneyPayerInfo:(id)a0;
- (id)notificaitonIdentifier:(long long)a0;
- (void).cxx_destruct;

@end
