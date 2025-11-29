@interface TIMXPBNFriendInitRequestBody : GPBMessage

@property (nonatomic) long long friendApplyLimit;
@property (nonatomic) BOOL hasFriendApplyLimit;
@property (nonatomic) long long friendLimit;
@property (nonatomic) BOOL hasFriendLimit;
@property (nonatomic) BOOL withUserProfile;
@property (nonatomic) BOOL hasWithUserProfile;
@property (nonatomic) BOOL withOnlineStatus;
@property (nonatomic) BOOL hasWithOnlineStatus;

+ (id)descriptor;

@end
