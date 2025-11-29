@class NSArray, NSString;

@interface CJPayNFCConfig : JSONModel

@property (nonatomic) BOOL forbidAll;
@property (retain, nonatomic) NSArray *routeAllowList;
@property (copy, nonatomic) NSString *defaultUrl;
@property (retain, nonatomic) NSArray *forbidBidList;
@property (nonatomic) double iosRouteColdLaunchDelay;
@property (nonatomic) double iosRDTColdLaunchDelay;
@property (nonatomic) BOOL disableLaunchTaskOpt;
@property (copy, nonatomic) NSString *nfcActivityCheckStatus;
@property (retain, nonatomic) NSArray *allowPreloadTimorBizList;
@property (nonatomic) double dcRDTCacheMemoryDuration;
@property (copy, nonatomic) NSString *dcRDTCacheSwitch;
@property (copy, nonatomic) NSString *dcRDTLoginCheck;
@property (retain, nonatomic) NSArray *dcRDTCacheAllowList;
@property (nonatomic) BOOL disablePreRequestNFK;
@property (nonatomic) BOOL revertURLAppendStrategy;
@property (copy, nonatomic) NSString *unknownResultTitle;
@property (copy, nonatomic) NSString *unknownResultUrl;
@property (nonatomic) BOOL revertIOSTransferStrategy;
@property (nonatomic) double nfcScanBeginDelayAfterAppLaunch;
@property (nonatomic) double nfcScanEndDelayAfterBegin;
@property (nonatomic) double nfcScanEndDelayAfterScan;
@property (retain, nonatomic) NSArray *nfcScanCls;
@property (retain, nonatomic) NSArray *nfcScanSel;
@property (nonatomic) long long nfcScanKey;
@property (copy, nonatomic) NSString *nfcScanSwitch;
@property (nonatomic) BOOL disablePitayaPreDownload;
@property (nonatomic) double pitayaPreDownloadDelayTime;
@property (retain, nonatomic) NSArray *rdtPreTaskForbidList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
