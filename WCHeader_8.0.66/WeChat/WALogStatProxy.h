@class NSString;

@interface WALogStatProxy : NSObject <IWALogStatService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logFeature:(unsigned int)a0 isReportNow:(BOOL)a1 isKeyLog:(BOOL)a2;
+ (void)logFeatureExt:(unsigned int)a0 logExt:(id)a1 isReportNow:(BOOL)a2 isKeyLog:(BOOL)a3;
+ (void)addLocationMgrUse:(unsigned long long)a0 isLocation:(BOOL)a1;
+ (void)delLocationMgrUse:(unsigned long long)a0;
+ (void)clickStreamViewDidAppear:(id)a0;
+ (void)clickStreamViewDidDisappear:(id)a0;
+ (void)logFeatureExt:(unsigned int)a0 logExt:(id)a1 isReportNow:(BOOL)a2 isKeyLog:(BOOL)a3 ignoreFreqCheck:(BOOL)a4;


@end
