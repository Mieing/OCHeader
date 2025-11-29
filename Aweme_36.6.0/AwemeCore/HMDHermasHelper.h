@interface HMDHermasHelper : NSObject

@property (class, nonatomic) long long recordThreadShareMask;
@property (class, nonatomic) BOOL enableEventUploadInfoLogging;

+ (id)customUserDefault;
+ (BOOL)getEnableRefactorFromApp;
+ (void)setEnableRefactorFromApp:(BOOL)a0;
+ (void)setEnableRefactorFromSDK:(BOOL)a0;
+ (id)urlStringWithHost:(id)a0 path:(id)a1;
+ (BOOL)isEnabled;
+ (id)rootPath;

@end
