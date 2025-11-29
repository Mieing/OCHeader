@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVPerfAdjustLogic : NSObject

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (nonatomic) unsigned long long device;
@property (nonatomic) long long thermalState;
@property (nonatomic) BOOL isBlackStreamFpsNeedUpdate;

+ (unsigned long long)getPerfDeviceType;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultDatas;
- (void)initNotifications;
- (void)updateThermalState:(long long)a0;
- (int)maxBlackStreamFPS;
- (int)minBlackStreamFPS;
- (void)updateBlackStreamFPSNeedUpdate:(BOOL)a0;
- (int)adjustBlackStreamFPSIfNeed:(int)a0;
- (void)onMatrixPerfWarning:(id)a0;
- (void).cxx_destruct;

@end
