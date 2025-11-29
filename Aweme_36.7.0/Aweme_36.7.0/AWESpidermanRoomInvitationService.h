@class NSString;

@interface AWESpidermanRoomInvitationService : HTSService <AWESpidermanRoomInvitationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)type2Str:(long long)a0;
- (id)transformToAWEModel:(id)a0;
- (void)getGameList:(long long)a0 completion:(id /* block */)a1;

@end
