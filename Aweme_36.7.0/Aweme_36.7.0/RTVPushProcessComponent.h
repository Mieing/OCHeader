@class RTVVoipMonitor, RTVVoipSafetyTracker, NSString;
@protocol RTVVoipService, RTVVoipTrackerHelperInterface, RTVVoipConfigureManagerInterface, RTVStateTransferActionHandlerManagerInterface, RTVVoipManagerInterface, RTVVoipPerformanceMonitor, RTVVoipNotifyManagerInterface, RTVUserProfileManagerInterface, RTVVoipContextManagerInterface, __RTVVoipContextManagerPrivateInterface;

@interface RTVPushProcessComponent : RTVComponentBase <RTVPushProcessComponentInterface>

@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (retain, nonatomic) id<RTVStateTransferActionHandlerManagerInterface> stateActionHandlerManager;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface, __RTVVoipContextManagerPrivateInterface> contextManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVVoipNotifyManagerInterface> notifyManager;
@property (readonly, nonatomic) id<RTVVoipTrackerHelperInterface> trackerHelper;
@property (readonly, nonatomic) RTVVoipSafetyTracker *safetyTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)showInnerPushWithStateTransfer:(id)a0;
- (void)showInnerPush:(id)a0;
- (long long)getNotifyTypeWithVoipModel:(id)a0;
- (id)__getNotifyTypeDescribe:(long long)a0;
- (void)__notifyVoipWithTopBannerStyle:(id)a0;
- (void)__notifyVoipWithFullScreenStyle:(id)a0;
- (void)__notifyVoipWithLCKEnhance:(id)a0;
- (void)__notifyVoipWithAutoAccept:(id)a0;
- (BOOL)__currentHasSplash;
- (void).cxx_destruct;
- (id)init;

@end
