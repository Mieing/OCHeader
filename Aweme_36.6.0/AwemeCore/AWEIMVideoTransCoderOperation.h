@class NSString, AVAsset, AWEIMPhotoAlbumLoader, NSDate, AWEIMAssetResourceLoader;
@protocol AWEIMTranscodeStrategy;

@interface AWEIMVideoTransCoderOperation : NSOperation {
    BOOL _finished;
    BOOL _executing;
}

@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *messageId;
@property (retain, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *locoalVideoPath;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) BOOL useOrigin;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isPreTranscode;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEIMPhotoAlbumLoader *assetLoader;
@property (retain, nonatomic) AWEIMAssetResourceLoader *resourceLoader;
@property (copy, nonatomic) id /* block */ beginCallback;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ dataCallback;
@property (retain, nonatomic) id<AWEIMTranscodeStrategy> transcodeStrategy;

- (void)markFinish;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)transcode;

@end
