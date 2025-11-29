@interface HMDMetricKitUtil : NSObject

+ (id)keyWordsToFilter;
+ (id)extractKeyValuePairs:(id)a0 keys:(id)a1;
+ (id)fetchRecentAppVersionCommitID;
+ (id)fetchCurrentImageList;
+ (BOOL)whetherWatchdogDuringBackgroundLaunch:(id)a0;
+ (id)mainAddressOfMetricKitException:(id)a0;
+ (BOOL)oomCalibrationWithMainAddress:(unsigned long long)a0;

@end
