@class AWESolariaNearLineDaily, AWESolariaNearLineSession, NSMutableArray, AWESolariaNearLine;

@interface AWESolariaNearLineStatus : NSObject

@property (retain, nonatomic) NSMutableArray *preList;
@property (retain, nonatomic) AWESolariaNearLine *nearLine;
@property (retain, nonatomic) AWESolariaNearLineSession *session;
@property (retain, nonatomic) AWESolariaNearLineDaily *daily;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;

- (void)onReportSuccess:(id)a0;
- (void)onReportFailed:(id)a0;
- (void)plus:(id)a0 value:(long long)a1;
- (id)initWithKVStorageHandler:(id)a0;
- (void)updateNow:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
