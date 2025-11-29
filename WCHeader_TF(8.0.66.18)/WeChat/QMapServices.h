@class NSString, NSMutableDictionary, QMapLoggerConfig;

@interface QMapServices : NSObject

@property (retain, nonatomic) NSMutableDictionary *internalCacheOptions;
@property (retain, nonatomic) QMapLoggerConfig *loggerConfig;
@property (copy, nonatomic) NSString *APIKey;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL enableDebugLog;

+ (id)sharedServices;

- (void)notifyAppKeyCheckResult:(int)a0;
- (id)sdkVersion;
- (void)setPrivacyAgreement:(BOOL)a0;
- (void)setQMapLoggerCofig:(id)a0;
- (id)init;
- (void)ConfigMapCacheClearOption:(id)a0;
- (int)getMapCacheClearSizeLimitByType:(long long)a0;
- (void).cxx_destruct;

@end
