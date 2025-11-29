@interface CameraScanCombineConfig : MMObject

@property (nonatomic) long long frameCountPerCombineGoodDetect;
@property (nonatomic) BOOL bEnableMemoryProtection;
@property (nonatomic) unsigned long long eUploadImageEncodeType;
@property (nonatomic) double fUploadCropRatio;
@property (nonatomic) BOOL bEnableSvrDetector;
@property (nonatomic) BOOL bEnableMotionDetector;
@property (nonatomic) double fMotionDetectorThreshold;
@property (nonatomic) long long preloadPopQueueTaskCount;

@end
