@class NSString, MMTimer, NSMutableArray;

@interface MMSessionRefreshService : MMUserService <MMServiceProtocol> {
    MMTimer *m_refreshTimer;
    NSMutableArray *m_objectNameArray;
    BOOL m_bInBackground;
    BOOL m_isTriggered;
    int m_skipedCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerToBeTriggered:(id)a0;
- (void)triggerTimer;
- (void)timeToUpdate;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void).cxx_destruct;

@end
