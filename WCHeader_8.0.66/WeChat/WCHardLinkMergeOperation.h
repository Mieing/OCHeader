@interface WCHardLinkMergeOperation : NSOperation

@property (copy) id /* block */ mergeCompletion;

- (void)mmStart;
- (id)initWithCompletion:(id /* block */)a0;
- (void)start;
- (void)hardlinkTheSameFile;
- (void).cxx_destruct;

@end
