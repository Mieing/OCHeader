@class LivePhotoMakeExtraInfo;

@interface WCLivePhotoMovModel : NSObject

@property (retain, nonatomic) LivePhotoMakeExtraInfo *makeExtraInfo;

+ (BOOL)retainAigcMetaDataEnabled;
+ (BOOL)isOSVersionGreaterThanOrEqual26;
+ (BOOL)forceSingleTrackTranscode;
+ (BOOL)isExistAIGCKeyInMetadata:(id)a0;
+ (id)getAIGCContentFromAsset:(id)a0;

- (void)addMetadataToVideoWithAsset:(id)a0 outputVideoPath:(id)a1 identifier:(id)a2 preferedHEVC:(BOOL)a3 stillImageTimeMs:(long long)a4 completionHandler:(id /* block */)a5;
- (void)addMetadataToVideo:(id)a0 outputVideoPath:(id)a1 identifier:(id)a2 preferedHEVC:(BOOL)a3 stillImageTimeMs:(long long)a4 completionHandler:(id /* block */)a5;
- (void)writeTrack:(long long)a0 reader:(id)a1 writer:(id)a2 queue:(id)a3 group:(id)a4 completionHandler:(id /* block */)a5;
- (void)finishWritingTracksWithVideo:(id)a0 reader:(id)a1 writer:(id)a2 durationMs:(long long)a3 isSuccess:(BOOL)a4 error:(id)a5 completionHandler:(id /* block */)a6;
- (id)createContentIdentifierMetadataItem:(id)a0;
- (id)createStillImageTimeWriterInputMetadataAdapter;
- (id)createStillImageTimeMetadataItem;
- (id)createAigcMetadataItem:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })makeStillImageTimeRangeWithStillImageTimeMs:(long long)a0 inFrameCount:(long long)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (long long)countFrames:(BOOL)a0 asset:(id)a1;
- (BOOL)isVideoCodecSupportedForLivePhoto:(id)a0;
- (void).cxx_destruct;

@end
