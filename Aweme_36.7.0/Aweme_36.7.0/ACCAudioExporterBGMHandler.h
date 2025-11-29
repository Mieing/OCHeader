@interface ACCAudioExporterBGMHandler : ACCAudioExporterBasicHandler

+ (BOOL)shouldForceUploadAudio:(id)a0;
+ (BOOL)shouldUploadTemplateOrigin:(id)a0;

- (id)bizType;
- (BOOL)shouldHandleAudioExport;
- (id)audioAssetsToRemove:(id)a0;
- (id)videoAssetsToRemove:(id)a0;
- (long long)countToRemove;

@end
