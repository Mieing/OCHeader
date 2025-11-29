@interface AWEAPMManager : NSObject

+ (void)setPerformanceUploadHost:(id)a0;
+ (void)attchFilter:(id)a0 forKey:(id)a1;
+ (void)attachInfo:(id)a0 forKey:(id)a1;
+ (void)enableInternalNetworkRequest:(BOOL)a0;
+ (void)setupJSONObjectWithDataFunction:(void /* function */ *)a0;
+ (void)setupInformationWithCustomHandler:(id /* block */)a0;
+ (void)trackerSessionDidChange:(id)a0;
+ (BOOL)enableToutiaoAPM;
+ (void)setupInformation;
+ (id)signInfo;
+ (void)setUserID:(id)a0;
+ (void)start;
+ (id)sharedInstance;
+ (void)setUserName:(id)a0;

- (void)bytedSettingDidChange;
- (id)init;
- (void)dealloc;

@end
