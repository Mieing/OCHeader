@class NSString, AWEPaidStreamIAAGetRewardInfoManager, NSHashTable, AWEPaidAuthConfig;
@protocol AWEPaidAuthDelegate;

@interface AWEPaidStreamAuth : NSObject <AWEPaidAuth>

@property (retain, nonatomic) NSHashTable *authEventHandlers;
@property (retain, nonatomic) AWEPaidAuthConfig *authConfig;
@property (retain, nonatomic) AWEPaidStreamIAAGetRewardInfoManager *loadAwardInfoManager;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL needRetry;
@property (nonatomic) long long awardConfigListCurrentCursor;
@property (weak, nonatomic) id<AWEPaidAuthDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAuthConfig:(id)a0;
- (void)registerAuthEventHandler:(id)a0;
- (void)log:(id)a0 extraParams:(id)a1;
- (void)unregisterAuthEventHandler:(id)a0;
- (void)loadMoreAuthWithCompletion:(id /* block */)a0;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredAuthEventHandlers;
- (void)sendEventWillStartAuth;
- (void)sendEventDidStartAuth:(unsigned long long)a0;
- (void)sendEventDidEndAuth:(unsigned long long)a0;
- (void)sendEventDidUpdateAuthWithUpdatedAuthItems:(id)a0;
- (void)requestForPlayletIAA;
- (void)syncLatestIAAStatusWithAuthConfig:(id)a0;
- (id)currentPaidAuthItemForAuthConfig:(id)a0;
- (void)getSendAwardConfigIfNeededWithAuthConfig:(id)a0;
- (void)updateAuthItem:(id)a0 withPaidStreamIAAAwardADConfig:(id)a1;
- (id)authItemForPaidStreamIAAAwardADConfig:(id)a0;
- (void)reportStartTrialInfo;
- (void)reportLeaveTrialInfo;
- (void)reportPromiseInfo;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)leave;
- (void)preload;
- (void)startWithCompletionHandler:(id /* block */)a0;

@end
