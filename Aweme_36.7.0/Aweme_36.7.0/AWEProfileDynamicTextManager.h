@class NSString;

@interface AWEProfileDynamicTextManager : NSObject <AWEProfileDynamicTextManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)postLayoutSettingDualColumnTip;
+ (id)postLayoutSettingTip;
+ (id)postLayoutSettingTriColumnTip;
+ (id)favoritePrivacyDetail;
+ (id)watchHistoryUserTip;
+ (id)watchHistoryVideoTip;
+ (id)watchHistoryLiveTip;
+ (id)newFavoriteFolderPublicTip;
+ (id)privateFavoriteFolderPublicTip;
+ (id)publicFavoriteFolderPrivateTip;
+ (id)privateFavoriteFolderShareTip;
+ (id)favoriteFolderPrivacyDetail;
+ (id)likeBatchModifyTip;
+ (id)favoriteBatchModifyTip;
+ (id)getTextWithSettingKey:(id)a0 defaultText:(id)a1;
+ (id)profileDynamicTextSettings;
+ (id)selectDynamicCoverTip;
+ (id)selectDynamicCoverPrivateAccountTip;
+ (id)defaultNickName;
+ (id)defaultEmptySignatureTip;
+ (id)defaultFollowSignatureTip;
+ (id)defaultRIPSignatureTip;
+ (id)editTextViewPlaceHolder;
+ (id)editSpecialPersonNotice;
+ (id)nameEditPlaceHolder;
+ (id)nicknameEditPagePlaceHolder;
+ (id)signatureEditPlaceHolder;
+ (id)genderEditPlaceHolder;
+ (id)birthdayEditPlaceHolder;
+ (id)locationEditPlaceHolder;
+ (id)schoolEditPlaceHolder;


@end
