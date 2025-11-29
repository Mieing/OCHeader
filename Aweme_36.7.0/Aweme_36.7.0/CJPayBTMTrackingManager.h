@class NSString;

@interface CJPayBTMTrackingManager : NSObject <CJPayBTMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)registerBtmPage:(id)a0 params:(id /* block */)a1;
- (void)markResponderAsBtmPage:(id)a0;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
- (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2 options:(id)a3;
- (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2;
- (BOOL)setExtraReportParams:(id)a0 host:(id)a1 options:(id)a2;
- (BOOL)updateBtmPage:(id)a0 sourceBtmToken:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
- (id)createReportParamsWithBtm:(id)a0 host:(id)a1 options:(id)a2;
- (void)trackEvent:(id)a0 params:(id)a1 btm:(id)a2 host:(id)a3;
- (BOOL)setBcmPageParams:(id)a0 host:(id)a1 clearOldValue:(BOOL)a2;
- (id)getBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1;
- (id)getBcmChainWithStandardContentWithHost:(id)a0 chainLength:(unsigned long long)a1;
- (id)getBcmChainWithStandardContentWithBtmModel:(id)a0 chainLength:(unsigned long long)a1;
- (id)bcmChainInLoggerSettings;
- (void)appendBcmChainForTrackerEvent:(id)a0 params:(id)a1;
- (id)loggerBackupAddBtmSettings;
- (void)appendBtmForTrackerEvent:(id)a0 params:(id)a1;
- (id)getNextBtmShowIdWithSourceBtmToken:(id)a0;
- (BOOL)enablePredefineBtmShowId;
- (BOOL)enableOfflineEventParams;
- (id)offlineEventParamsEventList;
- (BOOL)offlineEventParamsWithEvent:(id)a0 params:(id)a1;
- (id)btmSdkConfigSettings;
- (BOOL)btmUseV2Api;
- (BOOL)enableJsbCreateSourceBtmToken;

@end
