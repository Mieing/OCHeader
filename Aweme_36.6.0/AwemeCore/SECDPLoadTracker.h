@class NSString, NSMutableArray, SECMetrics;

@interface SECDPLoadTracker : NSObject

@property (retain, nonatomic) NSMutableArray *errMsgs;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *loadType;
@property (retain, nonatomic) SECMetrics *metrics;
@property (copy, nonatomic) NSString *engineType;
@property (nonatomic) BOOL useBuiltin;

+ (unsigned long long)sampleRate;

- (void)logError:(id)a0 withProvider:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)upload;

@end
