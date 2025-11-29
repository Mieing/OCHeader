@class NSString, IESLiveVRBgImageMonitor, NSMutableDictionary;

@interface IESLiveVRGlobalModule : IESLiveModule <IESLiveVROuterService, IESLiveVRGlobalModule>

@property (retain, nonatomic) IESLiveVRBgImageMonitor *monitor;
@property (retain, nonatomic) NSMutableDictionary *eventInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)loadVirtualBgImage:(id)a0 roomModel:(id)a1;
- (id)vrBgEventParamsWithTrackContext:(id)a0;
- (void)startEnterRoomWithRoomId:(id)a0;
- (void)endEnterRoomWithRoomId:(id)a0;
- (void)updateEnterRoomStartTime:(double)a0 enterRoomDuration:(double)a1 roomId:(id)a2;
- (void)resetVRConfigWithPlayer:(id)a0 roomModel:(id)a1;
- (void)backImageDownLoadSuccessWithEvevtParams:(id)a0;
- (void)clearEventInfosWithRoomId:(id)a0;
- (void)trackVRBgEventWithRoomId:(id)a0;
- (void).cxx_destruct;

@end
