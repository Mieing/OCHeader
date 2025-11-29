@class WCFileBrowseInfoDB;

@interface WCFileBrowseBuildIndexOperation : NSOperation

@property (retain, nonatomic) WCFileBrowseInfoDB *browseInfoDB;
@property (copy) id /* block */ buildIndexCompletion;

- (void)mmStart;
- (id)initWithCompletion:(id /* block */)a0;
- (void)start;
- (void)buildAllFileIntoFileBrowse;
- (id)p_getTaskInfo;
- (void)p_buildFileBrowseWithDataInfo:(id)a0 withType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
