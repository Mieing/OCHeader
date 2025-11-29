@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveGameOpenPlatformInteractMediaOpenAPIService : NSObject <IESLiveSocialInteractAction, IESLiveGameOpenPlatformInteractMediaOpenAPIInterface>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)cameraStateDidChange:(BOOL)a0;
- (void)muteStateDidChange:(BOOL)a0 reason:(id)a1;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)sendHostEvent:(id)a0;
- (id)roomTypeError;
- (BOOL)isVideoLiveRoom;
- (BOOL)isAudioLiveRoom;
- (void)queryMediaState:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)operateMediaState:(unsigned long long)a0 operate:(unsigned long long)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
