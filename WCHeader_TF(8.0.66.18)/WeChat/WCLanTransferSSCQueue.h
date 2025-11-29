@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, WCLanTransferSSCDelegate;

@interface WCLanTransferSSCQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sscQueue;
@property (retain, nonatomic) NSMutableDictionary *taskInfoDict;
@property (retain, nonatomic) NSMutableDictionary *taskInfoStartDict;
@property (weak, nonatomic) id<WCLanTransferSSCDelegate> delegate;

- (void)addTaskInfo:(id)a0;
- (void)stopTaskInfo:(id)a0;
- (void)handleDownloadProgress:(const void *)a0 total:(unsigned long long)a1 complete:(unsigned long long)a2 tryShow:(BOOL)a3;
- (void)handleDownload:(const void *)a0 withStatus:(const void *)a1;
- (void).cxx_destruct;

@end
