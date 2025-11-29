@class EffectPlatform, NLEModelDownloader_OC, NSOperationQueue, NSString;
@protocol ACCCutSameEffectDownloadManagerDelegate;

@interface ACCCutSameEffectDownloadManager : NSObject

@property (retain, nonatomic) EffectPlatform *epInstance;
@property (retain, nonatomic) NLEModelDownloader_OC *nleDownloader;
@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL useNLETemplate;
@property (weak, nonatomic) id<ACCCutSameEffectDownloadManagerDelegate> delegate;

- (id)ep_downloadEffectIDs:(id)a0 resourceIDS:(id)a1;
- (void)ep_downloadSingleEffect:(id)a0;
- (void)ep_downloadSingleEffectWithResourceID:(id)a0 panel:(id)a1;
- (id)initWithEP:(id)a0 nleDownloader:(id)a1 useNLETemplate:(BOOL)a2;
- (void)downloadEffectURS:(id)a0;
- (BOOL)cancelDownloadTask;
- (void).cxx_destruct;

@end
