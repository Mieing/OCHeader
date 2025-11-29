@class NSString;

@interface IESLiveInteractGroupLiveGameApi : HTSLiveApi

@property (copy, nonatomic) NSString *roomId;

- (id)initWithRoomId:(id)a0;
- (void)inviteFriendsWithUserIdList:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
