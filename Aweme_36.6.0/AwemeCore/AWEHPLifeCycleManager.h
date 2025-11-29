@class NSPointerArray, NSString;

@interface AWEHPLifeCycleManager : NSObject <AWEHPLifeCycleManagerProtocol>

@property (retain, nonatomic) NSPointerArray *delegateArray;
@property (nonatomic) BOOL isEnterPublishEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)addNotifications;
- (void)callLeaveHPSearchEntrance;
- (void)callEnterTopTabChannelWithTabId:(id)a0 enterModel:(id)a1;
- (void)callLeaveTopTabChannelWithTabId:(id)a0 leaveModel:(id)a1;
- (void)callLeavePublishEntranceIfNeed;
- (void)callLeavePublishEntrance;
- (void)callEnterBottomTabChannelWithTabId:(id)a0 enterModel:(id)a1;
- (void)callLeaveBottomTabChannelWithTabId:(id)a0 leaveModel:(id)a1;
- (void)callEnterHPSearchEntrance;
- (void)callEnterPublishEntrance;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;

@end
