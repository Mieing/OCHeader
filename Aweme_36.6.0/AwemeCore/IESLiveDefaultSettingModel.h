@class IESLiveResourceTimingReportConfig, NSArray, IESLiveErrorMsgReportConfig, IESLiveAPMReportConfig, NSString, IESLivePerformanceReportConfig, NSDictionary;

@interface IESLiveDefaultSettingModel : NSObject <IESMonitorSettingModelProtocol>

@property (retain, nonatomic) IESLiveAPMReportConfig *apmReportConfig;
@property (retain, nonatomic) IESLivePerformanceReportConfig *performanceReportConfig;
@property (retain, nonatomic) IESLiveErrorMsgReportConfig *errorMsgReportConfig;
@property (retain, nonatomic) IESLiveResourceTimingReportConfig *resourceTimingReportConfig;
@property (copy, nonatomic) NSArray *blockList;
@property (copy, nonatomic) NSString *bizTag;
@property (nonatomic) BOOL offlineMonitor;
@property (nonatomic) BOOL navigationMonitor;
@property (nonatomic) BOOL webCoreMonitor;
@property (nonatomic) BOOL emptyMonitor;
@property (nonatomic) BOOL eventTrace;
@property (nonatomic) BOOL checkSelf;
@property (nonatomic) BOOL logType;
@property (nonatomic) BOOL customReport;
@property (nonatomic) BOOL isEnableRegexOptimization;
@property (nonatomic) BOOL enableReportVid;
@property (nonatomic) BOOL switchToNewVersion;
@property (nonatomic) BOOL injectBrowser;
@property (nonatomic) BOOL onlyMonitorOffline;
@property (nonatomic) BOOL turnOnWebJSBMonitor;
@property (nonatomic) BOOL turnOnWebFetchMonitor;
@property (nonatomic) BOOL turnOnWebBlankMonitor;
@property (nonatomic) BOOL turnOnWebJSBPerfMonitor;
@property (nonatomic) BOOL turnOnFalconMonitor;
@property (nonatomic) BOOL turnOnCollectBackAction;
@property (nonatomic) BOOL turnOnCollectAsyncAction;
@property (nonatomic) BOOL turnOnWebRLMonitor;
@property (nonatomic) BOOL turnOnDomainWhitelist;
@property (nonatomic) BOOL turnOnLynxJSBMonitor;
@property (nonatomic) BOOL turnOnLynxFetchMonitor;
@property (nonatomic) BOOL turnOnLynxBlankMonitor;
@property (nonatomic) BOOL turnOnLynxJSBPerfMonitor;
@property (nonatomic) BOOL turnOnLynxCustomErrorMonitor;
@property (nonatomic) BOOL turnOnLynxRLMonitor;
@property (nonatomic) BOOL turnOnLynxBlankBitmap;
@property (copy, nonatomic) NSDictionary *webViewInitSels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModel;

- (id)toDic;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
