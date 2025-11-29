@class NSString;

@interface ACFCommitStatusModel : AWEBaseApiModel

@property (readonly, nonatomic) NSString *userID;
@property (nonatomic) long long closeFriendsStatus;
@property (nonatomic) long long newCloseFriendsStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
