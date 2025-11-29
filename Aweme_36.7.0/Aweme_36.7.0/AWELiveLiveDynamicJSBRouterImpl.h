@class IESLiveOpenLiveNotificationPanelMethodImp, NSString, IESLiveAnchorTimeScheduleJSBHandler, AnnieCommunityLiveAppointmentStatusMethodImpl, IESLivePublishPlaybackPiperHandler, IESLiveInfrastructureJSBHandler;

@interface AWELiveLiveDynamicJSBRouterImpl : NSObject <IESLiveLiveDynamicJSBRouter>

@property (retain, nonatomic) IESLiveOpenLiveNotificationPanelMethodImp *openLiveNotificationPanelMethod;
@property (retain, nonatomic) IESLiveAnchorTimeScheduleJSBHandler *timeScheduleHandler;
@property (retain, nonatomic) IESLivePublishPlaybackPiperHandler *publishPlaybackHandler;
@property (retain, nonatomic) AnnieCommunityLiveAppointmentStatusMethodImpl *appointmentStatusJsbHandler;
@property (retain, nonatomic) IESLiveInfrastructureJSBHandler *infrastructureJsbHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openLiveNotificationPanelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)openTimeScheduleWithParams:(id)a0 completion:(id /* block */)a1;
- (void)publishVideoWithParams:(id)a0 completion:(id /* block */)a1;
- (void)communityLiveAppointmentStatus:(id)a0 completion:(id /* block */)a1;
- (void)getClientSettingWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
