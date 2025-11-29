@class NSDictionary, NSArray, NSString;

@interface IESLiveWebViewMonitorSettingModel : NSObject

@property (copy, nonatomic) NSDictionary *apmReportConfig;
@property (copy, nonatomic) NSDictionary *performanceReportConfig;
@property (copy, nonatomic) NSDictionary *errorMsgReportConfig;
@property (copy, nonatomic) NSDictionary *resourceTimingReportConfig;
@property (copy, nonatomic) NSArray *blockList;
@property (copy, nonatomic) NSDictionary *commonSettings;
@property (copy, nonatomic) NSString *configDescp;
@property (copy, nonatomic) NSString *commonDesp;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *pid;

+ (BOOL)switchStatusForKey:(id)a0 webViewClass:(Class)a1;
+ (id)settingMapForWebView:(Class)a0;
+ (id)settingModelForWebView:(Class)a0;
+ (id)filterStartedClass:(id)a0;
+ (void)setConfig:(id)a0 forClasses:(id)a1;
+ (id)getValue:(id)a0 cls:(Class)a1;

- (void)setDefaultValueIfNeeded;
- (id)initWithSettingMap:(id)a0;
- (void).cxx_destruct;
- (id)jsonDescription;

@end
