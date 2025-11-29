@class NSString, SessionReportInfo;

@interface FindFriendBussReporter : NSObject <WCSessionFlowMonitorExt> {
    SessionReportInfo *m_info;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)exitFindFriends:(id)a0;
- (void)resetInfo;
- (void)onEnterBackground;
- (void)onAppearPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)report:(unsigned int)a0;
- (void).cxx_destruct;

@end
