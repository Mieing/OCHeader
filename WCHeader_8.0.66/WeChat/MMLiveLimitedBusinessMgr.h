@class NSString;

@interface MMLiveLimitedBusinessMgr : NSObject <WCFinderAntiAddictMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)a0;
- (void)onTimelineViewEnterBackground:(id)a0;
- (void)triggerAntiAddictCheckFromVC:(id)a0;
- (void)antiCheckViewDidAppear:(BOOL)a0 scene:(unsigned long long)a1;
- (void)antiCheckVerifySuc:(BOOL)a0 scene:(unsigned long long)a1;

@end
