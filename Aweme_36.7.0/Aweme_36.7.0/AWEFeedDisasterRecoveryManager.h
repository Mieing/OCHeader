@class NSString;

@interface AWEFeedDisasterRecoveryManager : NSObject <AWEFeedCacheTracker, AWEFeedDisasterRecoveryManagerProtocol>

@property (nonatomic) unsigned long long continuousRequestFailedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)onEvent:(id)a0 tag:(id)a1 params:(id)a2;
- (double)disasterRecoveryCacheUpdateTime;
- (BOOL)enableDisasterRecovery;
- (BOOL)enableRequestReportDisasterRecoveryStatus;
- (long long)disasterRecoveryCacheCount;
- (BOOL)enableForegroundDisasterRecoveryRequest;
- (void)requestDisasterRecoveryCache;
- (void)fetchDisasterRecoveryCacheWithError:(id)a0 requestID:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)enableContinuousFaultScene;
- (id)disasterRecoveryConfig;
- (void)clearDisasterRecoveryCache;

@end
