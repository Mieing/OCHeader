@class CRReportAPIClient;

@interface CRChannelReport : NSObject

@property (retain, nonatomic) CRReportAPIClient *reportClient;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)jumpToAppStore:(id)a0 report:(id)a1 completion:(id /* block */)a2;
+ (void)jumpToAppStore:(id)a0 completionWithBlock:(id /* block */)a1;
+ (void)presentStoreProductViewController:(id)a0 root:(id)a1 report:(id)a2 completion:(id /* block */)a3;
+ (void)presentStoreProductViewController:(id)a0 root:(id)a1 completionWithBlock:(id /* block */)a2;
+ (void)setLogging:(BOOL)a0;
+ (void)setLogLevel:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initSingleton;
- (void).cxx_destruct;

@end
