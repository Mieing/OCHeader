@class NSString;

@interface CameraScannerViewBlackOpt : NSObject

@property (nonatomic) double cameraStartTime;
@property (nonatomic) double cameraOutputTime;
@property (nonatomic) BOOL needReport;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL enableSessionOpt;
@property (nonatomic) long long hasSessionOpt;
@property (retain, nonatomic) NSString *canSessionOptErrorCode;
@property (nonatomic) float sessionDelayTime;
@property (nonatomic) BOOL enableLightRecover;
@property (nonatomic) BOOL isStartPhase;

- (id)init;
- (void).cxx_destruct;

@end
