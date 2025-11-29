@class NSString;

@interface AWEUserProfileABTestExperiment : NSObject <AWEUserProfileABTestExperimentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profilePageBGColor;
+ (BOOL)shouldGeneralSettingsUseShorterText;
+ (BOOL)shouldUseFavoriteLongPressGesture;
+ (BOOL)shouldTransferLikeToFavorite;
+ (BOOL)isFavoriteTransferButtonInCommentInput;
+ (BOOL)enablePadStyle;
+ (Class)aAWEPadUserPageAdapterClass;
+ (BOOL)isCurrentLandscape;
+ (BOOL)enableMusicTabBigFontAdapter;
+ (BOOL)isProfileCollectLargeCharacterModeStatus;
+ (BOOL)enableOfficialProfileProgramTabBigFontAdapter;
+ (BOOL)enableStarProfileProgramTabBigFontAdapter;
+ (BOOL)enableLikeAndFavoriteUIOpt;
+ (BOOL)personalFavoriteChallengeFontOpt;
+ (BOOL)enableOptimizedProfileSchema;
+ (BOOL)isProfileCollectMaterialExperienceOptStatus;
+ (BOOL)isProfileCollectListRightIconArrowStyleStatus;
+ (BOOL)isProfileCollectListRightIconShootSameStyleStatus;
+ (BOOL)enableFavoriteLandingPageSearchButton;
+ (BOOL)isProfileCollectSubTabStyleToShowBackgroundStatus;
+ (BOOL)enableLikeLandingPageSearchButton;
+ (Class)aAWELikeWorkViewControllerAdapterClass;
+ (id)profileFeedPreloadV2Opt;
+ (long long)postWorkShowStyle;
+ (id)preloadUserDetailConfig;
+ (BOOL)canShowHotSort:(id)a0;
+ (BOOL)shouldPostTabUsePostLayoutSelection:(id)a0;
+ (BOOL)canPostLocateSmartPreload;
+ (BOOL)shouldOptimizePostLocate;
+ (long long)profileEmptyPublishGuideNewStrategy;
+ (BOOL)enableEnterDetailPageAnimationOptimize;
+ (long long)padBannerContentMode;
+ (BOOL)enableSinglePageBGCompressWithUser:(id)a0;
+ (BOOL)dynamicCoverBackToHomepage;
+ (BOOL)enableProfileEditPageTitleBarOpt;
+ (BOOL)isPadStyleWithContext:(id)a0;
+ (BOOL)enableProfileCardEditTitleBarOpt;
+ (BOOL)enableProfileExtensionAreaRefactor;
+ (BOOL)enableLottieOptimize;
+ (BOOL)enableLineHeightOptimize;
+ (BOOL)enableUserSplitScreen;
+ (BOOL)enableProfileScanEntrance;
+ (BOOL)enableSearchEntranceEnhanced;
+ (BOOL)enableDetailContainerOpt;
+ (BOOL)enableTabContainerOpt;
+ (BOOL)isFavoriteVideoInAndOutSameDataSource;
+ (id)profileCollectMaterialExperienceOptInfo;
+ (BOOL)shouldUseRichSnackBarGuide;
+ (BOOL)enableBatManTabBigFontAdapter;
+ (id)sharedInstance;

- (id)aAWEPadUserPageAdapter;
- (id)aAWELikeWorkViewControllerAdapter;

@end
