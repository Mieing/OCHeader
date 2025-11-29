@interface EmoticonCustomCreateDownloadTask : EmoticonCustomCreateInternalTask

@property (copy, nonatomic) id /* block */ finderOnPrepareDownloadBlock;
@property (copy, nonatomic) id /* block */ finderOnStartDownloadBlock;
@property (copy, nonatomic) id /* block */ finderFailBlock;

- (void)startDownload;
- (BOOL)interruptDownload;
- (void).cxx_destruct;

@end
