@class NSDictionary, NSTimer;

@interface IESLiveNetworkSampling : NSObject

@property (retain, nonatomic) NSDictionary *netMetrics;
@property (retain, nonatomic) NSTimer *watchtimer;
@property (nonatomic) long long exceptionCount;

+ (id)thrashing;

- (void)fireTimer;
- (void)stopNetworkMonitoring;
- (void)samplingNetworkInfo;
- (void)samplingNetworkFrequency;
- (void)samplingNetworkPacketSize;
- (void)samplingNetworkException;
- (void)networkMonitoring;
- (void).cxx_destruct;
- (id)init;

@end
