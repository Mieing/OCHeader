@class NSString;
@protocol AWEHPNetCombineSubscriberAbility;

@interface AWEHPSideBarNetworkSubscriber : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (nonatomic) BOOL forceSendRequest;
@property (nonatomic) BOOL autoSendRequest;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberAbility> ability;
@property (nonatomic) long long sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupAbility:(id)a0;
- (void)handleResponse:(id)a0 withRequest:(id)a1;
- (BOOL)checkCanRequest:(id)a0;
- (void)getRequestBody:(id)a0 callback:(id /* block */)a1;
- (BOOL)p_shouldUpdateLeftSideBarOnFirstLaunchWithData:(id)a0;
- (BOOL)p_tryHotSwitchLeftSideModel:(id)a0 needForceSwitch:(BOOL)a1 dataScenes:(unsigned long long)a2;
- (void)p_markHasUpdateLeftSideBarOnFirstLaunch;
- (void)p_trackHotSwitchFailWithDataHash:(id)a0 withResult:(long long)a1;
- (void)sendRequestWithTriggerScene:(id)a0 businessId:(id)a1;
- (void).cxx_destruct;
- (void)handleRequest:(id)a0;

@end
