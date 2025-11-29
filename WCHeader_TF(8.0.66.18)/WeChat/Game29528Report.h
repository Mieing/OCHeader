@class NSString, NSMutableDictionary, GameLaunchReportInfo;

@interface Game29528Report : NSObject

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) int reportStage;
@property (nonatomic) int reportResult;
@property (retain, nonatomic) NSMutableDictionary *errorInfoDict;
@property (retain, nonatomic) NSMutableDictionary *externInfoDict;
@property (nonatomic) BOOL needReport;
@property (retain, nonatomic) NSString *currentUrl;
@property (retain, nonatomic) NSString *appStoreUrl;
@property (nonatomic) BOOL isLaunchApp;
@property (retain, nonatomic) GameLaunchReportInfo *reportInfo;

+ (id)reportModelWithAppId:(id)a0 reportStage:(int)a1 reportResult:(int)a2 errorInfoDict:(id)a3 externInfoDict:(id)a4 needReport:(BOOL)a5;

- (id)init;
- (void)report;
- (void)addExternInfo:(id)a0;
- (void)addErrorInfo:(id)a0;
- (id)toString;
- (void).cxx_destruct;

@end
