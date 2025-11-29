@interface WCSamplingConfig : NSObject

@property (nonatomic) BOOL isSamplingEnabled;
@property (nonatomic) BOOL isSamplingAllCases;
@property (nonatomic) BOOL reportToMMData;
@property (nonatomic) BOOL reportCallStack;
@property (nonatomic) unsigned int reportToMMDataInterval;
@property (nonatomic) unsigned int reportCallStackInterval;
@property (nonatomic) unsigned int traceVertexHangMs;
@property (nonatomic) unsigned int traceFragmentHangMs;
@property (nonatomic) unsigned int traceEncodeHangMs;
@property (nonatomic) unsigned int traceGPUHangMs;
@property (nonatomic) unsigned int reportCallStackLagLimit;

- (id)initWithXLabConfig:(id)a0;
- (void)updateWithXLabConfig:(id)a0;

@end
