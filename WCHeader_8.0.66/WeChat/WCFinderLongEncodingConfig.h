@class NSString, VideoEncodeTask, NSURL, AVAssetExportSession, AVAsset, AVMutableVideoComposition;

@interface WCFinderLongEncodingConfig : NSObject

@property (copy, nonatomic) id /* block */ beforePostCompletion;
@property (retain, nonatomic) NSString *longVidoePath;
@property (weak, nonatomic) VideoEncodeTask *longEncodeTask;
@property (weak, nonatomic) AVAssetExportSession *longEncodeExportSession;
@property (nonatomic) BOOL hadError;
@property (retain, nonatomic) NSURL *assetUrl;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVMutableVideoComposition *composition;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ progress;

- (id)initWithUrl:(id)a0;
- (BOOL)done;
- (void)checkCompletion;
- (id)composition:(id)a0;
- (id)onComplete:(id /* block */)a0;
- (id)onProgress:(id /* block */)a0;
- (id)assetForEncoding;
- (BOOL)isEncodingTask;
- (void).cxx_destruct;

@end
