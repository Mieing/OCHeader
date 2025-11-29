@class NSString, HTSLiveInteractiveAPI, IESLiveInteractiveAPI;
@protocol IESLiveRoomService;

@interface IESLiveLinkmicLinkAudienceApi : NSObject <IESLiveLinkmicLinkApi>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveInteractiveAPI *htsAPI;
@property (retain, nonatomic) IESLiveInteractiveAPI *interactiveAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)turnOnWithParams:(id)a0 completion:(id /* block */)a1;
- (void)turnOffWithParams:(id)a0 completion:(id /* block */)a1;
- (void)cancelApplyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)resumeWithParams:(id)a0 completion:(id /* block */)a1;
- (void)inviteWithParams:(id)a0 completion:(id /* block */)a1;
- (void)cancelInviteWithParams:(id)a0 completion:(id /* block */)a1;
- (void)replyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)applyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)permitWithParams:(id)a0 completion:(id /* block */)a1;
- (void)joinChannelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)leaveChannelWithParams:(id)a0 completion:(id /* block */)a1;
- (void)kickoutWithParams:(id)a0 completion:(id /* block */)a1;
- (void)silenceWithParams:(id)a0 completion:(id /* block */)a1;
- (id)initWithRoom:(id)a0 scene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
