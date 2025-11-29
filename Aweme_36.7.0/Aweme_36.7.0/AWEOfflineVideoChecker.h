@interface AWEOfflineVideoChecker : NSObject

+ (id)sharedInstance;

- (BOOL)hasEnoughStorageWithModels:(id)a0;
- (BOOL)hasCachedModel:(id)a0;
- (BOOL)hasDownloadedModel:(id)a0;
- (BOOL)hasEnoughStorageWithModel:(id)a0;
- (id)init;
- (void)setup;

@end
