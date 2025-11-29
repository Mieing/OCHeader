@class NSString;

@interface AWEPrivacySetting : NSObject <AWEPrivacySettingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchIMSettingWithSource:(id)a0 completion:(id /* block */)a1;
+ (void)fetchIMSettingWithCompletion:(id /* block */)a0;
+ (void)clearIMSettingWhenLogout;
+ (id)privateSettingGuideManager;
+ (void)disableAddressBook:(id /* block */)a0;
+ (void)switchVideoStoreViewStatus:(BOOL)a0 isQuickStory:(BOOL)a1 completion:(id /* block */)a2;
+ (id)currentIMSetting;
+ (void)changeUserSettingsWithParam:(id)a0 completion:(id /* block */)a1;
+ (BOOL)privacySettingOptimize;
+ (id)followingFollowerPermissionStatusTitle:(long long)a0;
+ (id)fansPagePermissionStatusTitle:(long long)a0;
+ (id)followingFollowerTrackKey:(long long)a0;
+ (id)closePrivacyTipString;
+ (void)changeAddressBookWithEnable:(BOOL)a0 completion:(id /* block */)a1;
+ (id)allowCommentTip;
+ (id)allowDuetTip;
+ (id)allowReactTip;
+ (BOOL)allowFilterComment;
+ (BOOL)autoFilterOffensiveComments;
+ (id)wholeAllowReceivingMessageTips;
+ (void)enableAddressBook:(id /* block */)a0;
+ (void)enableAutoFilterOffensiveComments:(id /* block */)a0;
+ (void)disableAutoFilterOffensiveComments:(id /* block */)a0;
+ (void)switchFollowShotStoreViewStatus:(BOOL)a0 completion:(id /* block */)a1;
+ (void)enableNearbyVisible:(id /* block */)a0;
+ (void)disableNearbyVisible:(id /* block */)a0;
+ (void)enableReadStatus:(id /* block */)a0;
+ (void)disableReadStatus:(id /* block */)a0;
+ (id)whoCanSeeMyLikeTip;
+ (id)allowDownloadTip;
+ (id)allowFavoriteTip;
+ (id)myCollectionMusicTip:(unsigned long long)a0;


@end
