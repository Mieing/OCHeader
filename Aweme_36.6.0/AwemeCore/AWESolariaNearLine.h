@class NSMutableArray, AWESolariaNearLineItem;
@protocol AWEStorageServiceKVInterface;

@interface AWESolariaNearLine : NSObject

@property (weak, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;
@property (retain, nonatomic) NSMutableArray *preList;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (retain, nonatomic) AWESolariaNearLineItem *current;

- (void)onReportSuccess:(id)a0;
- (void)onReportFailed:(id)a0;
- (void)plus:(id)a0 value:(long long)a1;
- (void)checkSize;
- (id)initWithKVStorageHandler:(id)a0;
- (void)updateNow:(long long)a0;
- (id)buildNearLineInfo:(long long)a0 type:(id)a1 needCurrentNearLine:(BOOL)a2;
- (void).cxx_destruct;
- (void)saveCache;
- (void)dealloc;
- (void)loadCache;

@end
