@class BDACSResourceConfig, NSString, BDACSWebReportConfig, BDACSiOSConfig, BDACSPornInspectConfig, NSNumber;

@interface BDACSConfigModel : NSObject {
    NSNumber *_enableProcessor;
    NSNumber *_enableWebReport;
    NSNumber *_enablePornInspect;
}

@property (readonly, nonatomic) BDACSResourceConfig *resourceConfig;
@property (readonly, nonatomic) BDACSWebReportConfig *webReport;
@property (readonly, nonatomic) BDACSPornInspectConfig *pornInspect;
@property (readonly, nonatomic) BDACSiOSConfig *iOSConfig;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *cid;
@property (readonly, copy, nonatomic) NSString *logExtra;
@property (readonly, copy, nonatomic) NSString *URLHost;

- (BOOL)shouldEnableInterceptor;
- (id)initWithCid:(id)a0 logExtra:(id)a1 URLHost:(id)a2;
- (id)initWithWebViewClientSecuritySettings:(id)a0 cid:(id)a1 logExtra:(id)a2 URLHost:(id)a3;
- (BOOL)enableProcessor;
- (BOOL)enableWebReport;
- (BOOL)enablePornInspect;
- (void)recordUpload;
- (void).cxx_destruct;

@end
