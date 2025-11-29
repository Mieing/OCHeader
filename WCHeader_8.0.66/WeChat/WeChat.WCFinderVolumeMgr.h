@class _TtC6WeChat17WCFinderVolumeMgr;

@interface WeChat.WCFinderVolumeMgr : NSObject {
    void /* unknown type, empty encoding */ contentVM;
    void /* unknown type, empty encoding */ playerView;
    void /* unknown type, empty encoding */ muteEntryVC;
    void /* unknown type, empty encoding */ shouldMute;
    void /* unknown type, empty encoding */ debugFloatView;
    void /* unknown type, empty encoding */ hiddenVolumeView;
    void /* unknown type, empty encoding */ addTimesPerSec;
    void /* unknown type, empty encoding */ addPerSecTotal;
    void /* unknown type, empty encoding */ enableAutoSwitch;
    void /* unknown type, empty encoding */ enableAutoSwitch_v;
    void /* unknown type, empty encoding */ enableReport;
    void /* unknown type, empty encoding */ $__lazy_storage_$_finderShareFeedSupportMutePlay;
    void /* unknown type, empty encoding */ targetVolume;
    void /* unknown type, empty encoding */ playerCurrentVolume;
    void /* unknown type, empty encoding */ playerAdditionVolume;
    void /* unknown type, empty encoding */ playerDecreaseVolume;
    void /* unknown type, empty encoding */ isAutoIncreaseAvalible;
    void /* unknown type, empty encoding */ autoIncreaseVolumetimer;
}

@property (class, nonatomic, readonly) _TtC6WeChat17WCFinderVolumeMgr *shared;

- (BOOL)mutePlayEnable;
- (void)configMute:(BOOL)a0;
- (void)configMuteVC:(id)a0;
- (void)didEnterBackGround;
- (void)volumeChangedAfterIOS15WithNotification:(id)a0;
- (void)volumeChangedBeforeIOS15WithNotification:(id)a0;
- (void)autoIncreaseVolumetimerFired;
- (id)init;
- (void)enableAutoVolumeCheck;
- (void)immediatelyFinishAutoVolumeCheck;
- (void)attachAutoVolumeCheck:(id)a0 contentVM:(id)a1;
- (void)enableReport:(BOOL)a0;
- (BOOL)needMute;
- (void).cxx_destruct;

@end
