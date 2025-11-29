@interface AWERecordFlowUseData : NSObject

@property (nonatomic) unsigned long long flowControlType;
@property (nonatomic) long long shootSourceFrom;
@property (nonatomic) long long subType;
@property (nonatomic) long long cameraMode;
@property (nonatomic) BOOL aigcStartFromConsumingProp;
@property (nonatomic) BOOL aigcFinishFromConsumingProp;
@property (nonatomic) BOOL aigcInteractionCompletion;
@property (nonatomic) BOOL aigcForcingToTakePicture;
@property (nonatomic) BOOL countdownDuetAutoFinished;
@property (nonatomic) double delayRecordVideoDuration;
@property (nonatomic) BOOL forbidRecordVideoDegradeTakePicture;

- (id)init;

@end
