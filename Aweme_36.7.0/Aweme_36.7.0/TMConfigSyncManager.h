@class NSString, NSDictionary, NSError, NSMutableArray;

@interface TMConfigSyncManager : NSObject <TimonConfigProtocol>

@property (retain, nonatomic) NSMutableArray *blocks;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL synchronizing;
@property (retain, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSDictionary *sdkConfig;
@property (retain, nonatomic) NSDictionary *rulerConfig;
@property (retain, nonatomic) NSDictionary *sensitivePathConfig;
@property (retain, nonatomic) NSDictionary *encryptionListConfig;
@property (retain, nonatomic) NSDictionary *timonLogConfig;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sdkConfig;
+ (void)syncConfig;
+ (void)registerConfigUpdatedBlock:(id /* block */)a0;
+ (id)encryptionListConfig;
+ (id)rulerConfig;
+ (id)sensitivePathConfig;
+ (id)timonLogConfig;
+ (id)sharedInstance;

- (void)syncConfig;
- (void)registerConfigUpdatedBlock:(id /* block */)a0;
- (void)__retry;
- (void)__notifyConfigDidUpdate;
- (void)reportConfigSyncRequestWithSuccess:(long long)a0 returyCount:(long long)a1 errorMassage:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
