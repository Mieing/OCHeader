@class NSDictionary, NSMutableArray, TTAdSplashModel;

@interface BDASplashModelPicker : NSObject

@property (retain, nonatomic) TTAdSplashModel *suitableModel;
@property (nonatomic) BOOL isPeriodFirstLaunchExist;
@property (nonatomic) BOOL isFirstLaunchExist;
@property (copy, nonatomic) NSDictionary *periodFirstLaunchAdExtra;
@property (nonatomic) BOOL pickStatus;
@property (nonatomic) long long suitableModelIndex;
@property (retain, nonatomic) NSMutableArray *pickReasons;
@property (copy, nonatomic) id /* block */ originalModelChecker;

+ (BOOL)checkRepeatSplashModel:(id)a0;

- (id)pickSuitableModel;
- (id)optimizePickModels:(id)a0;
- (id)pickModels:(id)a0;
- (BOOL)checkAllModelsTime:(id)a0;
- (void)trackPickFailedEventWithModel:(id)a0 index:(long long)a1 error:(long long)a2;
- (void)pickNoIgnoreFirstLaunchWithModels:(id)a0;
- (void)pickIgnoreFirstLaunchWithModels:(id)a0;
- (void)trackPeriodFirstChanceEventWithAdExtra:(id)a0;
- (void)pickOperationForSingleModel:(id)a0 index:(unsigned long long)a1;
- (void)trackPickNoSelectedWithModel:(id)a0 index:(long long)a1;
- (long long)checkIsValidForModel:(id)a0;
- (void)savePickReasonWithModel:(id)a0 index:(long long)a1 status:(long long)a2 error:(long long)a3;
- (BOOL)isSplashEnableWithLaunchType:(long long)a0;
- (BOOL)isRealTimeCacheExistWithModel:(id)a0;
- (BOOL)isCacheExistWithModel:(id)a0;
- (BOOL)isHotSplashFilterResourceExistWithModel:(id)a0;
- (void)addModelStatus:(id)a0;
- (id)pickSuitableRealTimeSplashWithModels:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
