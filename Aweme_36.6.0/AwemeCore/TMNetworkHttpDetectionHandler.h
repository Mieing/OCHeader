@interface TMNetworkHttpDetectionHandler : NSObject

@property (nonatomic) unsigned long long sampleRate;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void)reportHttpDetectionProblemWithContext:(id)a0;
- (void)detectHttpWithContext:(id)a0;

@end
