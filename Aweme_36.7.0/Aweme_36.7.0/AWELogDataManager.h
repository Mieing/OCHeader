@class NSMutableArray;

@interface AWELogDataManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableArray *logData;

+ (id)shareManager;

- (void)appendLogData:(id)a0;
- (void)appendLogArray:(id)a0;
- (id)needSendLogData;
- (void)clearPendingLogData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
