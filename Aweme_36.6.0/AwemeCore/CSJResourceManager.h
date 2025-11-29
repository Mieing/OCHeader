@class NSLock, NSMutableDictionary, NSString;

@interface CSJResourceManager : NSObject

@property (retain, nonatomic) NSLock *loadingItemLock;
@property (retain, nonatomic) NSMutableDictionary *loadingItemDict;
@property (copy, nonatomic) NSString *resourceDirFullPath;

+ (id)sharedInstance;

- (BOOL)pbu_isDownloadWithItem:(id)a0;
- (void)pbu_addWithItem:(id)a0;
- (void)pbu_executeWithItem:(id)a0 error:(id)a1;
- (void)loadWithItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
