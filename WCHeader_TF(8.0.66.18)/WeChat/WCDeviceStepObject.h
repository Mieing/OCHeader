@class NSMutableArray;

@interface WCDeviceStepObject : MMObject

@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int m7StepCount;
@property (nonatomic) unsigned int hkStepCount;
@property (retain, nonatomic) NSMutableArray *allHKSampleSource;

- (void).cxx_destruct;

@end
