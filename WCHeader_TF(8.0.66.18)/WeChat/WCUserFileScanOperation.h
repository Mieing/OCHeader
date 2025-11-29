@class NSDictionary, NSMutableArray;

@interface WCUserFileScanOperation : WCSilentTask

@property (copy) id /* block */ customFileOperation;
@property (copy) id /* block */ customPreFileCompetion;
@property (copy) id /* block */ customAfterFileCompletion;
@property (retain, nonatomic) NSDictionary *scanFolderConfig;
@property (retain, nonatomic) NSMutableArray *scanFolderItemStack;
@property (nonatomic) BOOL silentTaskEnabled;
@property BOOL isCancelled;
@property (nonatomic) BOOL shouldQuickIgnoreScan;

- (id)initWithPreAction:(id /* block */)a0 afterAction:(id /* block */)a1 fileAction:(id /* block */)a2;
- (void)start;
- (void)scanUserDirectory;
- (void)runLoop;
- (void)scanFolderBeginWithParentPath:(id)a0 scanType:(unsigned long long)a1 depth:(unsigned long long)a2;
- (void)push_scanFolderBeginWithParentPath:(id)a0 scanType:(unsigned long long)a1 depth:(unsigned long long)a2;
- (BOOL)pop_scanFolderBegin;
- (void)cancel;
- (void).cxx_destruct;

@end
