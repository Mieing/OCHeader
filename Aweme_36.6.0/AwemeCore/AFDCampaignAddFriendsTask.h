@class NSString;

@interface AFDCampaignAddFriendsTask : AFDCampaignBaseTask <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)willSendUnfollowUserRequestWithContext:(id)a0;
- (void)dealFCollectSchema:(id)a0;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
