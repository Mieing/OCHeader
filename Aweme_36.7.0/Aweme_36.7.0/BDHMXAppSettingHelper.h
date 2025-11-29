@class NSArray;

@interface BDHMXAppSettingHelper : NSObject

@property (readonly, nonatomic, getter=isBlankDetectionNewAlgorithmEnabled) BOOL blankDetectionNewAlgorithmEnabled;
@property (readonly, nonatomic) long long colorDiff;
@property (readonly, copy, nonatomic) NSArray *blankScreenNewAlgorithmUrlAllowList;
@property (readonly, copy, nonatomic) NSArray *blankScreenNewAlgorithmUrlBlockList;
@property (readonly, nonatomic) long long blankLoadingDuration;
@property (readonly, nonatomic) long long blankDetectionTiming;
@property (readonly, nonatomic) long long blankFixedDurationLoadingDuration;
@property (readonly, nonatomic, getter=isUseImageContextCaptureScreenshot) BOOL useImageContextCaptureScreenshot;
@property (readonly, copy, nonatomic) NSArray *lynxBlankScreenNewAlgorithmUrlBlockList;
@property (readonly, nonatomic) long long lynxBlankLoadingDuration;
@property (readonly, nonatomic) BOOL blankDetectCheckMemoryUsage;
@property (readonly, nonatomic) BOOL blankDetectCheckVirtualMemoryUsage;
@property (readonly, nonatomic) double blankDetectMemoryCriticalRates;
@property (readonly, nonatomic) double blankDetectVirtualMemoryCriticalRates;
@property (readonly, nonatomic, getter=isUseAlog) BOOL useAlog;
@property (readonly, nonatomic, getter=isEnableVirtualAid) BOOL enableVirtualAid;

+ (id)shareInstance;

@end
