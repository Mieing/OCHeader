@interface AWEStudioEditImpl.EditMusicVolumeAPI : NSObject <AWEStudioEditMusicVolumeAPI> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logicComponent;
}

- (void)initializeState:(unsigned long long)a0;
- (void)setVoiceOn:(BOOL)a0 forScene:(unsigned long long)a1;
- (void)updateVoiceInfo:(unsigned long long)a0;
- (void)updateVoiceVolume:(float)a0 forScene:(unsigned long long)a1;
- (void)updateVoiceVolumeDiff:(id)a0 forScene:(unsigned long long)a1;
- (void)updateMusicVolume:(float)a0 forScene:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
