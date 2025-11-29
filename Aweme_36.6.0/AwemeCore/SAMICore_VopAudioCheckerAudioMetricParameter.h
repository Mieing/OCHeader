@class NSString;

@interface SAMICore_VopAudioCheckerAudioMetricParameter : NSObject

@property (nonatomic) BOOL enableSNR;
@property (nonatomic) float snrThreshold;
@property (nonatomic) float cutoffLength;
@property (retain, nonatomic) NSString *audioMetricModelPath;

- (void)dealloc;

@end
