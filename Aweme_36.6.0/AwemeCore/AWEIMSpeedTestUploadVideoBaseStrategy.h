@class NSString;
@protocol AWEIMSpeedTestUploadVideoContextProtocol, AWEIMSpeedTestUploadVideoConfigProtocol;

@interface AWEIMSpeedTestUploadVideoBaseStrategy : NSObject <AWEIMSpeedTestUploadVideoStrategyProtocol>

@property (retain, nonatomic) id<AWEIMSpeedTestUploadVideoContextProtocol> context;
@property (retain, nonatomic) id<AWEIMSpeedTestUploadVideoConfigProtocol> speedTestConfig;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uploadCustomParameterString;
- (id)customSliceSize;
- (id)customSocketNum;
- (int)customThreshold;
- (id)videoConfig;
- (void)close;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;

@end
