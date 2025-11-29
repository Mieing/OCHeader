@class RTVVoipMonitor, NSMutableDictionary, NSMutableArray, NSObject;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVVoipPerformanceMonitor, RTVVoipManagerInterface, OS_dispatch_queue, RTVPushProcessComponentInterface;

@interface RTVPushDataSourceComponent : RTVComponentBase <RTVPushDataSourceComponentInterface>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *commandHandleQueue;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) NSMutableArray *receiveCommandIDs;
@property (readonly, nonatomic) NSMutableDictionary *receiveModelVersionDic;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVPushProcessComponentInterface> pushComponent;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) NSMutableDictionary *historyVoipInfo;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)handleReceiveVoipModel:(id)a0 withSourceType:(long long)a1;
- (unsigned long long)__handleReceiveVoipModel:(id)a0 withSourceType:(long long)a1;
- (id)__getPushBlockReasonStringWithReason:(unsigned long long)a0;
- (void)handleUpdateVoipModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
