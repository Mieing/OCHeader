@interface ACCAudioExporterDuetHandler : ACCAudioExporterBasicHandler

+ (BOOL)shouldForceUploadAudio:(id)a0;

- (id)bizType;
- (BOOL)shouldHandleAudioExport;
- (id)audioAssetsToRemove:(id)a0;
- (id)videoAssetsToRemove:(id)a0;

@end
