@class BDPathTemporaryBundle, NSString, BDPathLibraryBundle, BDPathDocumentBundle;

@interface BDPathComponent : NSObject

@property (copy, nonatomic) NSString *rootName;
@property (retain, nonatomic) BDPathDocumentBundle *documentBundle;
@property (retain, nonatomic) BDPathLibraryBundle *libraryBundle;
@property (retain, nonatomic) BDPathTemporaryBundle *tmpBundle;

+ (id)tmpBundleWithRootName:(id)a0;
+ (id)documentBundleWithRootName:(id)a0;
+ (id)libraryBundleWithRootName:(id)a0;

- (void)_cleanupDeletableFiles;
- (id)initWithRootName:(id)a0;
- (long long)totalFilesSize;
- (long long)deletableFilesSize;
- (void)cleanupDeletableFiles;
- (long long)triggerCleanEventForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1;
- (long long)_totalFilesSize;
- (long long)_deletableFilesSize;
- (void)totalFilesSizeWithCompletion:(id /* block */)a0;
- (void)deletableFilesSizeWithCompletion:(id /* block */)a0;
- (void)cleanupDeletableFilesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
