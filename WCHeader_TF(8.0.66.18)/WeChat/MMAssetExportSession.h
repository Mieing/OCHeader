@class NSURL, NSError, NSObject, VideoEncodeParams;
@protocol OS_dispatch_queue;

@interface MMAssetExportSession : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) NSURL *assetUrl;
@property (retain, nonatomic) NSURL *outputUrl;
@property (retain, nonatomic) VideoEncodeParams *encodeParams;
@property (nonatomic) long long metadataType;
@property (readonly, nonatomic) NSError *error;

- (id)initWithAssetURL:(id)a0;
- (void)dealloc;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)didFinishExportingWithError:(id)a0;
- (void)_exportWithCompletionHandler:(id /* block */)a0;
- (void)__AVAssetExportSession_exportWithCompletionHandler:(id /* block */)a0;
- (void)__wxTransMovToMp4_exportWithCompletionHandler:(id /* block */)a0;
- (void)_addWXMetadataIfNeededWithExportSession:(id)a0;
- (void)_adjustMetadataTypeWhileExportSessionFallback;
- (void)_writeMetadataIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)cancelExport;
- (void).cxx_destruct;

@end
