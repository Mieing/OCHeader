@interface ACCMusicAssetRemovalHandler : ACCAudioExporterBasicHandler

- (BOOL)shouldHandleAudioExport;
- (id)audioAssetsToRemove:(id)a0;
- (id)videoAssetsToRemove:(id)a0;

@end
