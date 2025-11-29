@class NSString, NSDictionary, AWEProfileHeaderContext, AWEUserModel;

@interface AWEProfileHeaderFollowAreaSectionViewModel : AWEBaseListSectionViewModel <AWEUserMessage, AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderFollowAreaSectionProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) BOOL checkUserFollowToastIsFromTopButton;
@property (nonatomic) BOOL unFollow;
@property (nonatomic) long long recommendBtnStatus;
@property (nonatomic) BOOL haveTrackShowRecommendButton;
@property (retain, nonatomic) NSDictionary *unfollowTrackParams;
@property (readonly, nonatomic) double sectionTopPadding;
@property (readonly, nonatomic) double footerHeight;
@property (nonatomic) long long userFollowStatus;
@property (nonatomic) long long updateUserRelationStatus;
@property (nonatomic) long long updateSpecialFollowStatus;
@property (retain, nonatomic) AWEUserModel *unfollowUserModel;
@property (nonatomic) BOOL unfollowNeedConfirm;
@property (nonatomic) long long relationBtnClickTag;
@property (nonatomic) BOOL sendMsgBtnClickFromTopButton;
@property (nonatomic) BOOL isFollowGuideMaskViewTracked;
@property (nonatomic) BOOL autoShowRecommendList;
@property (nonatomic) BOOL hasFetchedPostWork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showRemarkNameEntrance;

+ (long long)prePageTypeWithContext:(id)a0;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (id)lightInteractionSource;
+ (id)relationContextWithContext:(id)a0;
+ (BOOL)isFromCommentPage:(long long)a0;
+ (long long)subpageTypeWithContext:(id)a0;
+ (long long)fromActionWithContext:(id)a0;
+ (BOOL)isHitMarkFriendsSceneWithContext:(id)a0;
+ (long long)praPageTypeFromFriendRecommendWithContext:(id)a0;
+ (BOOL)isFromFamiliarItem:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didStartUnFollowUserOnProfileMenu:(id)a0 enterMethod:(unsigned long long)a1 needConfirm:(BOOL)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didCancelSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)configWithContext:(id)a0;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)trackEventForFollow:(BOOL)a0;
- (void)trackFollowAds;
- (void)addAdTrackerWithError:(id)a0;
- (void)addAdTrackerWithError:(id)a0 status:(long long)a1;
- (void)trackSwitchRecommendButtonWithAutoUnFold:(BOOL)a0;
- (void)trackShowRecommendButton;
- (void)trackEventForUnFollow;
- (void)changeStatusToUnFollow;
- (void)trackMsgBtnWithEventName:(id)a0;
- (void)updateCheckUserFollowToastIsFromTopButton:(BOOL)a0;
- (void)p_handleFollowedNotification:(id)a0;
- (BOOL)p_shouldTrackFollowFromCardWithDict:(id)a0;
- (void)finishFollowUpdateUserFollowStatus:(long long)a0;
- (void)recommendBtnStatusDidChanged:(long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
