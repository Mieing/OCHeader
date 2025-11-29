@class NSString;

@interface TTUrlTracker : JSONModel

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL is_pcdn;
@property (nonatomic) long long code;
@property (nonatomic) long long size;
@property (nonatomic) double duration;
@property (nonatomic) int protocol;
@property (nonatomic) double ttfb;
@property (copy, nonatomic) NSString *err;

- (id)initWithParam:(id)a0 isPcdn:(BOOL)a1;
- (void)updateDownloadedLen:(long long)a0;
- (void)updateNetInfo:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (void)dealloc;
- (void)updateDuration:(double)a0;

@end
