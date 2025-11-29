@interface WeNoteNativeHelperCallback : NSObject {
    struct WeNoteNativeHelperDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteNativeHelperDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct WeNoteNativeHelperDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteNativeHelperDispatcherCallback *x1; id x2; } *)a0;
- (void)onOpenLocationItemComplete:(unsigned long long)a0;
- (void)onPlayVoiceComplete:(unsigned long long)a0;
- (void)onPlayVoiceProgress:(unsigned long long)a0 progress:(id)a1;
- (void)onPauseVoiceComplete:(unsigned long long)a0;
- (void)onReleaseAudioPlayerComplete:(unsigned long long)a0;
- (void)onOpenMediaAssetGalleryPageComplete:(unsigned long long)a0;
- (void)onOpenWebpageComplete:(unsigned long long)a0;
- (void)onOpenFileComplete:(unsigned long long)a0;
- (void)onOpenPhotoSelectorComplete:(unsigned long long)a0 respList:(id)a1;
- (void)onTakePhotoComplete:(unsigned long long)a0 respInfo:(id)a1;
- (void)onOpenFileSelectorComplete:(unsigned long long)a0 respList:(id)a1;
- (void)onOpenLocationSelectorComplete:(unsigned long long)a0 resp:(id)a1;
- (void)onForwardToConversationComplete:(unsigned long long)a0 resp:(id)a1;

@end
