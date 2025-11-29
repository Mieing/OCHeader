@class NSLock;

@interface AWEMemoriesAssetsManager : NSObject

@property (retain, nonatomic) NSLock *lock;

- (BOOL)nextUploadAvailable;
- (id)uploadedAssetsLocalIdentifiers;
- (void)uploadAndStoreScannedResources:(id)a0;
- (void)uploadAssetsRecursively:(id)a0 chunkSize:(unsigned long long)a1 newInstalled:(BOOL)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
