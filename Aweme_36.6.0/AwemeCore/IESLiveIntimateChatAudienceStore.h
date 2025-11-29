@class NSNumber, NSString;
@protocol IESLiveRoomService;

@interface IESLiveIntimateChatAudienceStore : NSObject <HTSLiveMessageSubscriber, HTSLiveRoomRemoteActions>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL intimateChatEnabled;
@property (retain, nonatomic) NSNumber *timeStamp;
@property (nonatomic) BOOL isAdminWhenEnterRoom;
@property (nonatomic) double connectStartTime;
@property (nonatomic) long long cameraDuration;
@property (nonatomic) double cameraStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)enableIntimateChatIfNeeded;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;
- (id)initWithRoom:(id)a0;

@end
