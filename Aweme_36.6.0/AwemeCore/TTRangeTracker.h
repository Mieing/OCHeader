@class NSString, NSArray, NSMutableDictionary;
@protocol Ignore, TTUrlTracker;

@interface TTRangeTracker : JSONModel

@property (copy, nonatomic) NSString *bus_id;
@property (nonatomic) long long pcdn_size;
@property (nonatomic) double pcdn_dur;
@property (nonatomic) long long cdn_size;
@property (nonatomic) double cdn_dur;
@property (nonatomic) double wait_time;
@property (nonatomic) double start_time;
@property (nonatomic) char retry_times_max;
@property (retain, nonatomic) NSArray<TTUrlTracker> *urls;
@property (retain, nonatomic) NSMutableDictionary<Ignore> *urlsDic;

- (void)updateDuration:(double)a0 cdnDuration:(double)a1;
- (void)adaptLog;
- (id)initWithParam:(id)a0 retryMax:(char)a1;
- (void)onEnd:(id)a0 isPcdn:(BOOL)a1 downloadedSize:(long long)a2;
- (void)onCompleted:(id)a0 response:(id)a1;
- (void)onFailed:(id)a0 response:(id)a1 error:(id)a2;
- (void)updateDuration:(id)a0 isPcdn:(BOOL)a1 time:(double)a2;
- (void)updateDownloadedLen:(id)a0 isPcdn:(BOOL)a1 downloadedSize:(long long)a2;
- (void)urlStatsSummary:(id)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (void)dealloc;
- (void)onStart;

@end
