@class YYDiskCache, NSString;

@interface SECTessaCommitRepo : NSObject <SECTessaDiskStorage>

@property (retain) YYDiskCache *cache;
@property (copy, nonatomic) NSString *dirPath;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *repoName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareDisk;
- (id)diskStoragePath;
- (BOOL)diskStorageAvailable;
- (unsigned long long)diskStorageSize;
- (id)diskStorageEntries;
- (id)initWithConfig:(id)a0 withRepoName:(id)a1;
- (void)saveCommit:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)allCommits;
- (void)setup;
- (id)allKeys;

@end
