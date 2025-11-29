@class NSArray;

@interface RTVInviteFriendsDataProviderContext : NSObject

@property (copy, nonatomic) NSArray *onTheCallUserIDs;
@property (nonatomic) BOOL supportShowVoipStatus;
@property (readonly, copy, nonatomic) NSArray *defaultSelectedUserIDs;
@property (readonly, nonatomic) BOOL autoSelectOnlineUser;
@property (readonly, nonatomic) unsigned long long maxSelectUserCount;
@property (readonly, nonatomic) BOOL isCoSeeScene;
@property (readonly, copy, nonatomic) NSArray *preferSelectedUserIDs;
@property (readonly, nonatomic) BOOL supportGroup;

- (id)initWithDefaultSelectedUserIDs:(id)a0 autoSelectOnlineUser:(BOOL)a1 maxSelectUserCount:(unsigned long long)a2 preferSelectedUserIDs:(id)a3 supportGroup:(BOOL)a4;
- (void)updateOnTheCallUserIDs:(id)a0;
- (void)updateIsCoSeeScene:(BOOL)a0;
- (void)updateSupportShowVoipStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
