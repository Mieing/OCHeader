@class OMCASRProcessor;

@interface MJMovieComposingASRProcessor : NSObject

@property (retain, nonatomic) OMCASRProcessor *backingProcessor;

+ (id)fetchModelZipFile;
+ (id)fetchModelConfigFilesPathInDirectoryAtPath:(id)a0;
+ (id)fetchModelConfigFilesWithVersion:(id)a0 destPath:(id)a1;
+ (void)extractAudioDataFromClipSegment:(id)a0 inHybridMode:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForASRFromSegmentationInfos:(id)a0;
+ (BOOL)hasCachedSpeechRecognitionResultWithStoryElementSegmentVMs:(id)a0;
+ (void)requestOnlineASRWithRequestItems:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestOnlineASRWithAudioData:(id)a0 audioID:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isSegmentValidForASR:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)initBackingProcessorIfNeeded;
- (void)requestSpeechRecognitionWithStoryElementSegmentVMs:(id)a0 inHybridMode:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
