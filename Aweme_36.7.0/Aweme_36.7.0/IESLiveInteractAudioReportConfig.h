@interface IESLiveInteractAudioReportConfig : NSObject

@property (nonatomic) BOOL enableDynamicThreshold;
@property (nonatomic) BOOL enableFallDown;
@property (nonatomic) unsigned long long fallDownTime;
@property (nonatomic) unsigned long long reportTimeInterval;
@property (nonatomic) unsigned long long highLimitAudioVolume;

- (id)yesOrNoWith:(BOOL)a0;
- (id)description;
- (id)init;

@end
