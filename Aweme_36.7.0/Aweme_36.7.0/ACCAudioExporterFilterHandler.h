@interface ACCAudioExporterFilterHandler : ACCAudioExporterBasicHandler

- (BOOL)shouldHandleAudioExport;
- (id)audioFiltersToRemove:(id)a0;
- (id)videoFiltersToRemove:(id)a0;

@end
