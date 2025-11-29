@protocol IESLiveRoomService;

@interface IESLiveInteractionGuestLinkerAPI : HTSLiveApi

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (id)init:(id)a0 context:(id)a1;
- (void)enterLinkChannel:(id)a0 completion:(id /* block */)a1;
- (void)leaveLinkChannel:(id)a0 completion:(id /* block */)a1;
- (void)joinLinkChannel:(id)a0 linkType:(int)a1 completion:(id /* block */)a2;
- (void)stopLinkChannel:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)changeLinkChannelBackgroundState:(id)a0 background:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
