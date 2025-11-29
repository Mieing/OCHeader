@class NSMutableArray;
@protocol SAMIVoiceConversionDownloaderDelegate;

@interface SAMIVoiceConversionDownloader : NSObject

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (weak, nonatomic) id<SAMIVoiceConversionDownloaderDelegate> delegate;

- (id)logChain;
- (void)postCompleteTasks:(id)a0 success:(BOOL)a1 error:(id)a2 taskID:(id)a3;
- (id)headerFieldParams:(id)a0;
- (void)downloadVCTasks:(id)a0 taskID:(id)a1;
- (void)cancelSubTask:(id)a0;
- (void)cancelTask:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)cancelAllTasks;

@end
