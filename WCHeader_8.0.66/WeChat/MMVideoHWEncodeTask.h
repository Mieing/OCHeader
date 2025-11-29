@class SightAssetExportSession;

@interface MMVideoHWEncodeTask : VideoEncodeTask

@property (retain, nonatomic) SightAssetExportSession *hwExportSession;

+ (id)getProfileLevelWithParams:(id)a0;

- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)cleanExportSession;
- (void)stopExport;
- (id)getReaderVideoSettingWithParams:(id)a0;
- (id)getVideoSettingWithParams:(id)a0;
- (id)HDRMetadataInsertionModeValue;
- (id)HDRMetadataInsertionModeKey;
- (id)getAudioSettingWithParams:(id)a0;
- (id)getAudioSettingForDolbyVideo:(id)a0 asset:(id)a1;
- (id)getAudioSettingWithParams:(id)a0 asset:(id)a1;
- (void).cxx_destruct;

@end
