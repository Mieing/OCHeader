@class NSString, NSArray;

@interface RTVInteractionInvitationModel : NSObject

@property (readonly, nonatomic) BOOL inviteDirectly;
@property (readonly, nonatomic) BOOL autoSelectOnlineUsers;
@property (readonly, copy, nonatomic) NSString *eventPage;
@property (readonly, copy, nonatomic) NSArray *preferInvitedUsers;

- (id)initWithDirectInvite:(BOOL)a0 preferInvitedUsers:(id)a1;
- (id)initWithAutoSelectOnlineUsers:(BOOL)a0;
- (void)updateEventPage:(id)a0;
- (id)initWithPreferInvitedUsers:(id)a0 autoSelectOnlineUsers:(BOOL)a1;
- (void).cxx_destruct;

@end
