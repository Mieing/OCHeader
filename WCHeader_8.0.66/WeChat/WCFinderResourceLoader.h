@class NSMutableDictionary, NSMutableArray;

@interface WCFinderResourceLoader : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (retain, nonatomic) NSMutableDictionary *waitingListenerDict;
@property (nonatomic) unsigned long long maxDownloadCount;

- (id)init;
- (BOOL)addLoadTask:(id)a0;
- (BOOL)cancelLoadTask:(id)a0;
- (void)startDownloadIfCan;
- (void)retryDownloadTask:(id)a0;
- (void)callCompleteBlockWithTask:(id)a0 ret:(BOOL)a1;
- (id)waitingListenerWithUid:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
