@class NSArray;

@interface WCLiveBlurPowerModeAdjustParam : NSObject

@property (nonatomic) double staticBlurPersistBadScoreTime;
@property (nonatomic) double staticBlurPersistGoodScoreTime;
@property (nonatomic) unsigned long long staticBlurPersistBadScoreMaxCnt;
@property (nonatomic) unsigned long long staticBlurPersistOrdinaryScoreMaxCnt;
@property (retain, nonatomic) NSArray *staticBlurEnterCheckNumAdjustList;
@property (nonatomic) unsigned long long realTimeBlurEnterConstrastCheckCnt;
@property (nonatomic) unsigned long long realTimeBlurEnterColorDisCheckCnt;
@property (nonatomic) double similarContrastRatio;
@property (nonatomic) double similarColorDistance;
@property (nonatomic) double similarStandardRate;
@property (nonatomic) double monitorScheduleInterval;
@property (nonatomic) BOOL isSilenceHandle;

+ (id)createDefaultPowerModeAdjustParam;
+ (id)createZerothGearPowerModeAdjustParam;
+ (id)createFirstGearPowerModeAdjustParam;
+ (id)createSecondGearPowerModeAdjustParam;
+ (id)createThirdGearPowerModeAdjustParam;
+ (id)createFourthGearPowerModeAdjustParam;

- (void).cxx_destruct;

@end
