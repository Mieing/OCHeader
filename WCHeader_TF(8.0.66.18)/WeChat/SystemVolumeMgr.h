@class NSString, NSMutableArray;

@interface SystemVolumeMgr : MMUserService <MMServiceProtocol> {
    int m_volumeCheckType;
    int m_volumeSetType;
    float m_lastMediaVolume;
    float m_lastPhoneCallVolume;
    float m_lastVolume;
    BOOL m_volumeChecking;
    NSMutableArray *m_volumeSetByProgrammingQueue;
}

@property (readonly, nonatomic) float currentVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startVolumeCheck;
- (void)stopVolumeCheck;
- (BOOL)isVolumeChecking;
- (void)setVolume:(float)a0;
- (void)setVolume:(float)a0 reason:(int)a1;
- (void)setVolumeVisible:(float)a0;
- (void)silentVolumeOnBecomeActive;
- (void)restoreVolumeOnResignActive:(float)a0;
- (void)mm_setVolume:(float)a0 type:(int)a1 reason:(int)a2 increaseCount:(BOOL)a3;
- (void)startVolumeCheckByNotification;
- (void)stopVolumeCheckByNotification;
- (void)volumeChangedAfterIOS15:(id)a0;
- (void)mm_onVolumeChangeTo:(float)a0 reason:(id)a1 audioCategory:(id)a2;
- (BOOL)isUseVoiceProcessingIO;
- (void).cxx_destruct;

@end
