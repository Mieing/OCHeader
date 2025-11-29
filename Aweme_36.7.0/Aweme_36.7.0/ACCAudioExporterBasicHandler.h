@class AWEVideoPublishViewModel;

@interface ACCAudioExporterBasicHandler : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

+ (BOOL)shouldForceUploadAudio:(id)a0;

- (id)bizType;
- (id)initWithPublishModel:(id)a0;
- (BOOL)shouldHandleAudioExport;
- (id)audioAssetsToRemove:(id)a0;
- (id)videoAssetsToRemove:(id)a0;
- (id)audioFiltersToRemove:(id)a0;
- (id)videoFiltersToRemove:(id)a0;
- (BOOL)muteOriginAudio;
- (BOOL)recoverOriginAudio;
- (long long)countToRemove;
- (id)audioFiltersToReplace:(id)a0;
- (id)videoFiltersToReplace:(id)a0;
- (void).cxx_destruct;

@end
