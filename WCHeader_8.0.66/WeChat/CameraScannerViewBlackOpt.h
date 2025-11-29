@class NSString;

@interface CameraScannerViewBlackOpt : NSObject

@property (nonatomic) long long shortDuration;
@property (nonatomic) long long longDuration;
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

- (void)setShortDuration:(long long)a0;
- (void)setLongDuration:(long long)a0;
- (long long)shortDuration;
- (long long)longDuration;
- (id)init;
- (void).cxx_destruct;

@end
