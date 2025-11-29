@class AWEIMUser, NSString, NSArray, AWEUserAccountCertInfoModel, AWEUserModel, NSNumber;

@interface AWEAdaptorUserModel : NSObject

@property (retain, nonatomic) AWEUserModel *mainUserModel;
@property (retain, nonatomic) AWEIMUser *iMUserModel;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) BOOL isVerifiedEnterprise;
@property (readonly, copy, nonatomic) NSString *verifiedIconName;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, copy, nonatomic) NSString *signature;
@property (readonly, copy, nonatomic) NSString *customID;
@property (readonly, copy, nonatomic) NSString *recommendReason;
@property (readonly, nonatomic) BOOL isPrivateAccount;
@property (readonly, nonatomic) NSArray *avatar168FromThumbnailURLs;
@property (readonly, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (readonly, copy, nonatomic) NSArray *fansTagArray;
@property (retain, nonatomic) NSNumber *followerCount;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;

- (id)getUserModel;
- (id)getIMUserModel;
- (long long)getFollowStatusWithIMFollowStatus:(long long)a0;
- (long long)getIMFollowStatusWithFollowStatus:(long long)a0;
- (long long)getFollowerStatusWithIMFollowerStatus:(long long)a0;
- (long long)getIMFollowerStatusWithFollowerStatus:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isFriend;

@end
