@class AWEIMUser, NSString, NSURL, NSNumber;

@interface AWEIMUserViewModel : NSObject <AWEIMImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSURL *avatarURL;
@property (retain, nonatomic) NSURL *avatarURLSmall;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long followerStatus;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *customID;
@property (retain, nonatomic) NSString *customVerifyInfo;
@property (nonatomic) unsigned long long verificationType;
@property (retain, nonatomic) NSString *enterpriseVerifyInfo;
@property (retain, nonatomic) NSString *shortID;
@property (retain, nonatomic) NSNumber *commerceUserLevel;
@property (nonatomic) BOOL isToCommerceUser;
@property (retain, nonatomic) NSString *aliasPinYin;
@property (retain, nonatomic) NSString *nicknamePinYin;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *contactNamePinYin;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displayNameForKVO;
@property (retain) AWEIMUser *user;
@property (readonly, nonatomic) long long latestChatTimestamp;
@property (nonatomic) unsigned long long vmType;
@property (nonatomic) BOOL isElfUser;

- (void)dealloc;
- (BOOL)isCompanyProfile;
- (BOOL)isVerifiedEnterprise;
- (id)fakeUserID;
- (id)initWithUserID:(id)a0 secUserID:(id)a1;
- (BOOL)isVerifiedMusician;
- (id)keyForPlaceholder;
- (BOOL)isVerifiedUser;
- (BOOL)isPersonalVerifiedEffectArtist;
- (void)p_updateDisplayName;
- (void)clearUserDisplayInfo;
- (BOOL)isCommerceProfile;
- (void).cxx_destruct;

@end
