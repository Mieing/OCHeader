@class NSString, IESLiveRoomMQEventReportApi;

@interface AWELiveTrackEventManager : NSObject <AWELiveTrackEventProtocol>

@property (retain, nonatomic) IESLiveRoomMQEventReportApi *reportApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLiveTracker;

- (void)trackLiveShowWithRoom:(id)a0 coreParams:(id)a1 extraParams:(id)a2;
- (void)trackLiveDuration:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 requestId:(id)a3 duration:(id)a4 extraParams:(id)a5;
- (void)trackLiveDurationWithRoomData:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 requestId:(id)a3 duration:(id)a4 extraParams:(id)a5;
- (id)_parmasWithAdSkyLightLive:(id)a0;
- (void)_async:(id /* block */)a0;
- (void)_trackLiveDurationWithRoomDict:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 requestId:(id)a3 duration:(id)a4 extraParams:(id)a5;
- (void)trackLiveDurationWithRoomDict:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2 requestId:(id)a3 duration:(id)a4 extraParams:(id)a5;
- (void)trackLiveDurationWithEnterFromMerge:(id)a0 enterMethod:(id)a1 duration:(id)a2 extraParams:(id)a3;
- (void).cxx_destruct;

@end
