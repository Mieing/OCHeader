@class AVAssetReader, NSString, NSError, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TELivePhotoUtils : NSObject {
    struct unique_ptr<bool[], std::default_delete<bool[]>> { struct __compressed_pair<bool *, std::default_delete<bool[]>> { BOOL *__value_; } __ptr_; } _trackFinishFlag;
}

@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSError *writeError;
@property (retain, nonatomic) NSString *outputDir;
@property (retain, nonatomic) NSString *userMetadata;

+ (id)outputVideoPath:(id)a0 outDir:(id)a1;
+ (id)outputImagePath:(id)a0 identifier:(id)a1 outDir:(id)a2;
+ (id)createUserMetadataItem:(id)a0;
+ (id)createContentIdentifierMetadataItem:(id)a0;
+ (id)createStillImageTimeAssetWriterInput;
+ (id)createStillImageTimeMetadataItem;

- (BOOL)saveLivePhoto:(id)a0 coverImagePath:(id)a1 position:(float)a2 completion:(id /* block */)a3;
- (id)addMetadataToVideo:(id)a0 pos:(float)a1 outputFile:(id)a2 identifier:(id)a3;
- (void)finishWritingTracksWithVideo:(id)a0 outputImagePath:(id)a1 complete:(id /* block */)a2;
- (id)addMetadataToPhotoWithUIImage:(id)a0 outputFile:(id)a1 identifier:(id)a2;
- (BOOL)saveLivePhotoWithUIImageCover:(id)a0 coverImage:(id)a1 position:(float)a2 completion:(id /* block */)a3;
- (id)addMetadataToPhoto:(id)a0 outputFile:(id)a1 identifier:(id)a2;
- (void)writeTrack:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)errorWithCode:(long long)a0 reason:(id)a1;

@end
