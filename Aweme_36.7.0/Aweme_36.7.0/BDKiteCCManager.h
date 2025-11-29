@class BDKiteCCTokenModel, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDKiteCCManager : NSObject <MultiNetStateObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mobileTokenQueue;
@property (retain, nonatomic) BDKiteCCTokenModel *model;
@property (nonatomic) BOOL enableTTNetMultiNet;
@property (nonatomic) int multiNetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)carrierTypeWithIPV6;
- (void)onMultiNetStateChanged:(int)a0 currentState:(int)a1 time:(long long)a2;
- (void)onUserSpecifiedNetworkEnabled:(BOOL)a0 time:(long long)a1;
- (void)networkWWANConnected:(id *)a0 netStateNumber:(id *)a1;
- (long long)carrierTypeWithCode:(long long)a0;
- (void)formatRequestParameters;
- (void)requestServerVerification:(id)a0;
- (id)generateVerificationBody;
- (id)slotFromService;
- (id)carrierNameFromType:(long long)a0;
- (id)swordData:(id)a0;
- (void)responseNetError:(id)a0 code:(long long)a1 callback:(id /* block */)a2;
- (void)getTokenByTTNet;
- (void)handleGetToken:(id)a0 obj:(id)a1 response:(id)a2;
- (void)formatReportRequestParameters:(id)a0;
- (id)generateReportBody:(id)a0 outError:(id *)a1;
- (void)reportCenterToken:(unsigned long long)a0 params:(id)a1 token:(id)a2;
- (void)handleGetTokenResult:(BOOL)a0;
- (void)trackUaidResult:(BOOL)a0 trackModel:(id)a1 endTime:(long long)a2;
- (void).cxx_destruct;
- (void)startIfNeeded:(long long)a0;
- (id)init;

@end
