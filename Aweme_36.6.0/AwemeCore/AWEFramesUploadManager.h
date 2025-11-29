@class NSLock, NSMutableArray;

@interface AWEFramesUploadManager : NSObject

@property (retain, nonatomic) NSMutableArray *uploaderQueue;
@property (retain, nonatomic) NSLock *lock;

+ (void)uploadOriginalFramesWithVideoId:(id)a0 awemeId:(id)a1 publishModel:(id)a2 uploadParameters:(id)a3 completion:(id /* block */)a4;
+ (void)uploadOriginalFramesWithVideoIds:(id)a0 awemeId:(id)a1 publishModels:(id)a2 uploadParameters:(id)a3 completion:(id /* block */)a4;
+ (id)sharedInstance;

- (BOOL)removeUploader:(id)a0;
- (BOOL)addUploader:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
