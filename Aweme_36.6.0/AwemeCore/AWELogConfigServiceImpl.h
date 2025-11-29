@class NSString;

@interface AWELogConfigServiceImpl : NSObject <AWELogConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)minimumLogLevel;
- (id)customKey;
- (void)initLog;
- (void)initLogWithLevel:(long long)a0;
- (id)appId;

@end
