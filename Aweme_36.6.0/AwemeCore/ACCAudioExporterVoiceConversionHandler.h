@interface ACCAudioExporterVoiceConversionHandler : ACCAudioExporterBasicHandler

+ (BOOL)shouldForceUploadAudio:(id)a0;

- (BOOL)shouldHandleAudioExport;
- (id)audioAssetsToRemove:(id)a0;
- (BOOL)recoverOriginAudio;
- (id)videoFiltersToReplace:(id)a0;
- (id)volumeFilter;

@end
