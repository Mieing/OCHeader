@class NSString, NSDictionary, AWEAwemeModel, AWEUserModel, AWETeenAgeGuideManager;

@interface AWETeenProfileHeaderActionController : NSObject

@property (nonatomic) BOOL isRelationReasonTracked;
@property (nonatomic) BOOL isEnteringLive;
@property (nonatomic) BOOL liveTimeNoticeHadDisplayed;
@property (retain, nonatomic) AWETeenAgeGuideManager *ageAlert;
@property (copy, nonatomic) id /* block */ reshowShareWithAvatarPanelBlock;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHomepage;
@property (readonly, nonatomic) BOOL isSigExisted;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (nonatomic) BOOL hasTrackedShowRecommendButton;
@property (copy, nonatomic) NSString *editRemarkEnterFrom;

- (id)enterFromValueWithProcessId:(id)a0;
- (id)avatarArray;
- (id)getUserAge;
- (BOOL)shouldShowTagInfo;
- (BOOL)shouldShowGender;
- (BOOL)shouldShowAge;
- (BOOL)shouldShowUnknownInfo;
- (id)unknownInfoString;
- (BOOL)isCurrentUserFromHomePage;
- (BOOL)isDifferentAvatarWithOtherUser:(id)a0;
- (id)avatarArrayForUser:(id)a0;
- (BOOL)showSignature;
- (void)showEditProfileFromInfoButtons:(long long)a0;
- (void)changeAvatar:(id)a0;
- (void)avatarTappedWithHeaderView:(id)a0;
- (void)showEditProfileWithType:(long long)a0;
- (void)trackClickProfileIcon;
- (void)showProfileImagePreviewView;
- (BOOL)isUsernameEnableEdit;
- (void)editSignature;
- (BOOL)isNicknameEnableEdit;
- (id)enterMethodValueWithProcessId:(id)a0 enterString:(id)a1;
- (BOOL)enableSetRequestID;
- (BOOL)enableSetFollowType;
- (BOOL)enableEnterRelationListVC;
- (void)avatarTappedFromHomePage:(id)a0;
- (void)reshowShareWithAvatarPanelIfNeeded;
- (void)showImagePreviewView:(id)a0 type:(long long)a1;
- (BOOL)shouldShowSchool;
- (BOOL)isSignatureInteractionEnabled;
- (id)avatarURIForUser:(id)a0;
- (id)idStrWithPrefix;
- (id)signatureString;
- (void).cxx_destruct;
- (id)locationString;

@end
