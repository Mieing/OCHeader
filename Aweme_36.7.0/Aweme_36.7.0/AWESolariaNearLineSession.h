@class NSMutableArray, AWESolariaNearLineSessionItem;
@protocol AWEStorageServiceKVInterface;

@interface AWESolariaNearLineSession : NSObject

@property (weak, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;
@property (retain, nonatomic) NSMutableArray *preList;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (retain, nonatomic) AWESolariaNearLineSessionItem *current;

- (void)onReportSuccess:(id)a0;
- (void)onReportFailed:(id)a0;
- (void)plus:(id)a0 value:(long long)a1;
- (void)checkSize;
- (id)initWithKVStorageHandler:(id)a0;
- (void)updateNow:(long long)a0;
- (id)buildSessionInfo:(long long)a0 type:(id)a1;
- (void).cxx_destruct;
- (void)saveCache;
- (void)dealloc;
- (void)loadCache;

@end
