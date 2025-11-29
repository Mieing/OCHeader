@interface MJSegmentAudioInspectorViewModel : MJSegmentInspectorViewModel {
    BOOL _isAudioMutedOriginalValue;
    float _volumeOriginalValue;
}

@property (nonatomic) BOOL isAudioMuted;
@property (nonatomic) float volume;
@property (readonly, nonatomic) BOOL canAdjustVolume;

- (id)initWithSegment:(id)a0 type:(unsigned long long)a1;
- (void)didFinishAdjustAudio;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (void)notifyDidCancel;
- (void)notifyDidReset;
- (void)setValuesToOriginal;
- (void)notifyDidApplyToAll:(id)a0;

@end
