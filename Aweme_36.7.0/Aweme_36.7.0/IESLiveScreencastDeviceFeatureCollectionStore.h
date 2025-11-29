@class HTSEventContext, NSString, IESLiveScreencastDeviceFeatureCollectionManager;
@protocol IESLiveRoomService;

@interface IESLiveScreencastDeviceFeatureCollectionStore : NSObject <IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) IESLiveScreencastDeviceFeatureCollectionManager *deviceFeatureCollectManager;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willStopAnchorLive;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)stopDeviceFeatureCollection;
- (void)resumeDeviceFeatureCollection;
- (void)pauseDeviceFeatureCollection;
- (void)addDeviceFeataureToCollectionManager;
- (void)startDeviceFeatureCollection;
- (void).cxx_destruct;

@end
