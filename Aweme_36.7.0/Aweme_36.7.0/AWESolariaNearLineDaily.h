@class AWESolariaNearLineDailyItem, NSMutableArray;
@protocol AWEStorageServiceKVInterface;

@interface AWESolariaNearLineDaily : NSObject

@property (weak, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;
@property (retain, nonatomic) NSMutableArray *preList;
@property (retain, nonatomic) AWESolariaNearLineDailyItem *current;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;

- (void)onReportSuccess:(id)a0;
- (void)onReportFailed:(id)a0;
- (void)plus:(id)a0 value:(long long)a1;
- (id)initWithKVStorageHandler:(id)a0;
- (void)updateNow:(long long)a0;
- (void)checkDateUpdate:(long long)a0;
- (id)buildDailyInfo:(long long)a0 type:(id)a1;
- (void).cxx_destruct;
- (void)saveCache;
- (void)dealloc;
- (void)loadCache;

@end
