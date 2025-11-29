@class NSNumber, NSString, UIImage, AWEUserModel, AWEURLModel;

@interface AWEFollowListRecommendCardModel : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *alias;
@property (retain, nonatomic) AWEURLModel *avatar300;
@property (retain, nonatomic) UIImage *verificationIcon;
@property (retain, nonatomic) NSNumber *followerCount;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) long long blockStatus;
@property (nonatomic) long long blockedStatus;
@property (nonatomic) BOOL privateAccount;
@property (nonatomic) long long trackIndex;

- (void).cxx_destruct;
- (id)init;

@end
