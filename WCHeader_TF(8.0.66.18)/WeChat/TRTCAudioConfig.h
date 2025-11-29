@interface TRTCAudioConfig : NSObject

@property (nonatomic) long long sampleRate;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isCustomCapture;
@property (nonatomic) long long route;
@property (nonatomic) long long newVolumeType;
@property (nonatomic) long long audioQuality;
@property (nonatomic) BOOL isAgcEnabled;
@property (nonatomic) BOOL isAnsEnabled;
@property (nonatomic) BOOL isEarMonitoringEnabled;
@property (nonatomic) BOOL isVolumeEvaluationEnabled;
@property (nonatomic) unsigned long long volumeEvaluationInterval;
@property (nonatomic) BOOL isVadDetectWhenVolumeEvaluate;

- (id)init;
- (void)dealloc;
- (void)loadFromLocal;
- (void)saveToLocal;
- (unsigned long long)currVolumeEvaluationInterval;

@end
