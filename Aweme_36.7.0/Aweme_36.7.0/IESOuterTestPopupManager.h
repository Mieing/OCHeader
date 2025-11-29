@interface IESOuterTestPopupManager : NSObject

+ (void)popupOuterTestNewVersionIfNeededWithCustomHeaders:(id)a0 traceParams:(id /* block */)a1 frequencyControl:(id /* block */)a2 completionBlock:(id /* block */)a3;
+ (void)joinOuterTestNewVersionWithTraceParams:(id /* block */)a0 frequencyControl:(id /* block */)a1 completionBlock:(id /* block */)a2;
+ (void)joinOuterTestNewVersionTask:(id)a0 withTraceParams:(id /* block */)a1 completionBlock:(id /* block */)a2;
+ (void)checkOuterTestInstall;
+ (void)popupOuterTestFirstInstallGuideIfNeededCompletion:(id /* block */)a0;
+ (void)popupOuterTestFirstInstallGuideIfNeededCompletion:(id /* block */)a0;
+ (BOOL)isTFExpireModelInvalid:(id)a0;
+ (BOOL)isTFExpireDefaultFrequencyControlValidWithCurrentVersionCode:(unsigned long long)a0 expireModel:(id)a1;
+ (void)updateTFExpireFrequencyControlWithCurrentVersionCode:(unsigned long long)a0 expireModel:(id)a1;
+ (void)clearTFExpireFrequencyControlWithCurrentVersionCode:(unsigned long long)a0 expireModel:(id)a1;
+ (void)popupOuterTestExpireAlertIfNeededWithTraceParams:(id)a0 completion:(id /* block */)a1;
+ (void)popupOuterTestExpireAlertIfNeededWithTraceParams:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isCheckVersionModelInvalid:(id)a0;
+ (BOOL)isDefaultFrequencyControlValidWithUpdateVersion:(id)a0 currentVersion:(id)a1;
+ (void)updateFrequencyControlWithUpdateVersion:(id)a0;
+ (void)popupOuterTestNewVersionIfNeededWithTraceParams:(id /* block */)a0 frequencyControl:(id /* block */)a1 completionBlock:(id /* block */)a2;
+ (void)load;

@end
