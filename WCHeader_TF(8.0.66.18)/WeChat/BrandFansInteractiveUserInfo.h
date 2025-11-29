@class NSString, BrandFansContactExtendInfo, BizInteractiveUserInfo;

@interface BrandFansInteractiveUserInfo : NSObject <BrandFansProfileItem>

@property (retain, nonatomic) BizInteractiveUserInfo *userInfo;
@property (retain, nonatomic) BrandFansContactExtendInfo *extendInfo;
@property (retain, nonatomic) NSString *bizUin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserInfo:(id)a0;
- (void)updateWithBizUin:(id)a0;
- (id)profileAvatarImageURL;
- (id)profileDescription;
- (BOOL)profileInBlacklist;
- (id)profileNickname;
- (id)profileSignature;
- (id)profileUserID;
- (unsigned int)profileUserType;
- (id)profileInteractiveInfo;
- (void)updateWithExtendInfo:(id)a0;
- (BOOL)profileUseRoundAvatar;
- (id)profileFriendNickname;
- (id)profileBizUin;
- (void).cxx_destruct;

@end
