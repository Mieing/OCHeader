@class NSString;

@interface AWEUserDetailHelper : NSObject <AWEUserDetailHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showPrivateAccountInfoView:(id)a0;
+ (BOOL)isPrivateAccount:(id)a0;
+ (id)relationDescriptionTextSet;
+ (long long)emptyRecommendType:(id)a0;
+ (BOOL)isCompanyProfileForRecommendUserWithUser:(id)a0;
+ (id)relationDescriptionTextWithUser:(id)a0;
+ (long long)relationDescriptionIconTypeWithUser:(id)a0;
+ (BOOL)enableFullScreenRecommendVC:(id)a0;
+ (BOOL)enableEmptyRecommendVC:(id)a0;
+ (BOOL)isVsOfficialAccount:(id)a0;
+ (id)createProfileEditTextViewControllerWithEditType:(long long)a0 user:(id)a1;
+ (BOOL)shouldShowChoiceCardWithUser:(id)a0;
+ (BOOL)needShowRecommendButton:(id)a0 user:(id)a1;
+ (BOOL)currentValueForUserHomeShowRecommendView;
+ (BOOL)isMemorialAccount:(id)a0;
+ (id)relationDescriptionAttachmentIconWithUser:(id)a0 color:(id)a1;
+ (void)updateShowRecommendViewValue:(BOOL)a0;
+ (id)tabInfoListFromServer:(id)a0;
+ (BOOL)enableEmptyPostRecommendVC:(id)a0;
+ (BOOL)shouldShowRelationDescriptionLabel:(id)a0 isFriendText:(BOOL)a1;
+ (BOOL)needShowNavMoreButton:(id)a0 user:(id)a1;
+ (BOOL)showRecommendView:(id)a0;


@end
