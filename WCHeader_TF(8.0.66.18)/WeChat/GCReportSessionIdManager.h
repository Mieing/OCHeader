@class NSString, NSMutableDictionary;

@interface GCReportSessionIdManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) double sessionIdGenTime;
@property (nonatomic) double sessionIdRefreshTime;
@property (retain, nonatomic) NSMutableDictionary *viewControllerDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)pageId:(id)a0;
- (void)onFindFriendEntryClick;
- (void)onFullScreenGameHostWebVcInit:(id)a0;
- (void)onNativeVcInit:(id)a0;
- (BOOL)checkGameVcExist;
- (void)checkGenSessionId:(id)a0;
- (void)onFullScreenWebVcPoped:(id)a0;
- (void)onNativeVcPopedOrDismissed:(id)a0;
- (void)onViewControllerExit:(id)a0;
- (void)refreshSessionIdTime:(id)a0;
- (void).cxx_destruct;

@end
