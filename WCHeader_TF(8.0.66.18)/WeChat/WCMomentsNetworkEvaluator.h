@class NSString;

@interface WCMomentsNetworkEvaluator : MMUserService <INetworkStatusMgrExt, MMServiceProtocol>

@property (readonly, nonatomic) unsigned int networkConnectionStatus;
@property (readonly, nonatomic) long long networkLinkCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initEvaluator;
- (unsigned int)getNetworkConnectionStatus;
- (long long)getNetworkLinkCondition;
- (id)descriptionForNetworkStatus;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;

@end
