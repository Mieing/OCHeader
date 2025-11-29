@interface IESECFPSMonitorWrapper : IESECHMDMonitorWrapper

@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long totalFrames;
@property (nonatomic) long long count;

- (void).cxx_destruct;
- (id)init;

@end
