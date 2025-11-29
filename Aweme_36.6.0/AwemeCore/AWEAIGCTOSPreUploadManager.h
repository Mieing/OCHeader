@class NSMutableDictionary, NSObject;

@interface AWEAIGCTOSPreUploadManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskStatus;
@property (retain, nonatomic) NSMutableDictionary *taskImagePaths;
@property (retain, nonatomic) NSMutableDictionary *taskVideoPaths;
@property (retain, nonatomic) NSMutableDictionary *taskCompletions;
@property (retain, nonatomic) NSMutableDictionary *TOSCache;
@property (retain, nonatomic) NSObject *uploader;

+ (id)sharedInstance;

- (id)TOSResultWithTaskID:(id)a0;
- (unsigned long long)taskStasusWithTaskID:(id)a0;
- (void)removeMemoryTaskWithID:(id)a0;
- (void)observerTaskResultWithID:(id)a0 completion:(id /* block */)a1;
- (id)preUploadVideoAssetPaths:(id)a0 withUUID:(id)a1;
- (id)preUploadTOSWithImagePaths:(id)a0;
- (id)imagePathsWithTaskID:(id)a0;
- (id)videoPathsWithTaskID:(id)a0;
- (void).cxx_destruct;

@end
