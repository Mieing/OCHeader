@class NSString;

@interface AFDPlayerInteractiveTipsManager : NSObject <AFDPlayerInteractiveTipsManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showToastWhenIsProhibited:(id)a0;
+ (void)showToastWhenIsProhibitedAndNoCommentToast;
+ (BOOL)showToastWhenVideoDrawBack:(id)a0;
+ (void)showToastWhen24StoryToNormal;
+ (void)showToastWhenStoryToNormal;
+ (void)showToastWhenIsProhibitedAndCommentToast;
+ (id)toastTextWithPrivacyType:(long long)a0 awemeModel:(id)a1;
+ (BOOL)shouldShowSpecialToastForPrivacyType:(long long)a0;
+ (void)showSpecialToastWithPrivacyType:(long long)a0 text:(id)a1;
+ (void)showNormalToastWithAwemeModel:(id)a0 privacyType:(long long)a1 text:(id)a2;
+ (void)showToastWithText:(id)a0 completeHandler:(id /* block */)a1;
+ (void)showSpecialPrivacyToastWithPrivacyType:(long long)a0 text:(id)a1;
+ (void)showSpecialFriendsVisibleToastWithPrivacyType:(long long)a0 text:(id)a1;
+ (BOOL)hasPrivateButtonNotFirstClickValue;
+ (id)privateSpecialToastText;
+ (void)cachePrivateSpecialToast;
+ (BOOL)hasFriendsVisibleButtonNotFirstClickValue;
+ (id)friendsSpecialToastText;
+ (void)cacheFriendsVisibleSpecialToast;
+ (void)showNormalPrivacyToastWithAwemeModel:(id)a0 text:(id)a1;
+ (void)showNormalPublicAllFansWithText:(id)a0;
+ (void)cacheNewDailyStoryToast;
+ (BOOL)isShowNewDailyStoryToastWithAwemeModel:(id)a0;
+ (id)toastTextWithNewDailyStory;
+ (void)updateCacheNewDailyStoryToast;
+ (void)cacheSpecialToastForKey:(id)a0;
+ (id)key_NewStoryOfVisibleStatus;
+ (BOOL)p_isNewStoryToastVisibleStatus;
+ (void)showToastWhenVideoPrivacyChangedWithAwemeModel:(id)a0;
+ (BOOL)showToastWhenVideoPrivacyChangedWithPublishViewModel:(id)a0;
+ (void)showToastWhenVideoDrawBackToast;


@end
