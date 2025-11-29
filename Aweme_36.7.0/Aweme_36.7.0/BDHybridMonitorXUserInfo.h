@class IESLiveResourceTimingReportConfig, NSString, NSArray, IESLiveAPMReportConfig, IESLiveErrorMsgReportConfig, IESLivePerformanceReportConfig, NSDictionary;

@interface BDHybridMonitorXUserInfo : NSObject <BDHMXSettingNetworkInfoProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *blockList;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *installId;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSArray *settingHostArray;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (retain, nonatomic) IESLiveAPMReportConfig *apmReportConfig;
@property (retain, nonatomic) IESLivePerformanceReportConfig *performanceReportConfig;
@property (retain, nonatomic) IESLiveErrorMsgReportConfig *errorMsgReportConfig;
@property (retain, nonatomic) IESLiveResourceTimingReportConfig *resourceTimingReportConfig;
@property (copy, nonatomic) NSDictionary *webViewInitSels;

+ (id)defaultUserInfo;

@end
