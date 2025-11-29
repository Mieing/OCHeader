@class NSArray, SECStandardURL;
@protocol SECNetTrafficProtocol;

@interface SECNetURLReferDetectTask : NSObject {
    id<SECNetTrafficProtocol> _traffic;
    NSArray *_relatedLogs;
    SECStandardURL *_standardTrafficURL;
    NSArray *_featuredLogs;
    unsigned long long _sampleRate;
    NSArray *_hitFeatures;
}

- (id)hitFeatures;
- (id)runWithLog:(id)a0;
- (id)rulerParamsWithLog:(id)a0;
- (id)initWithTraffic:(id)a0 withLogs:(id)a1;
- (id)featuredLogs;
- (void).cxx_destruct;
- (unsigned long long)sampleRate;
- (void)run;
- (void)setup;

@end
