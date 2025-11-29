@class IESLiveProfileSkin_Skin, IESLiveProfileSkinDressResource, IESLiveDressResourceParallax, IESLiveUserCardSkinResource, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveUserCardSkin : NSObject

@property (nonatomic) BOOL overlayWebpEnterFlag;
@property (nonatomic) BOOL overlayWebpLoopFlag;
@property (nonatomic) BOOL overallWbbpFlag;
@property (retain, nonatomic) IESLiveProfileSkin_Skin *profileSkin;
@property (retain, nonatomic) IESLiveProfileSkinDressResource *dressResource;
@property (retain, nonatomic) IESLiveUserCardSkinResource *overallImage;
@property (retain, nonatomic) IESLiveUserCardSkinResource *overallWbbp;
@property (retain, nonatomic) IESLiveUserCardSkinResource *topBorderImage;
@property (retain, nonatomic) IESLiveUserCardSkinResource *overlayWebpEnter;
@property (retain, nonatomic) IESLiveUserCardSkinResource *overlayWebpLoop;
@property (retain, nonatomic) IESLiveUserCardSkinResource *overallWebpEnter;
@property (retain, nonatomic) IESLiveUserCardSkinResource *mainButtonImage;
@property (retain, nonatomic) IESLiveUserCardSkinResource *profileCloseWebp;
@property (retain, nonatomic) IESLiveDressResourceParallax *parallax;
@property (retain, nonatomic) IESLiveDressResourceParallax *topOverlayParallax;
@property (retain, nonatomic) IESLiveUserCardSkinResource *borderPng;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *preStoreDataGroup;
@property BOOL shouldPopup;

- (id)seperatorLineColor;
- (id)followTextColor;
- (id)avatarBorderUrls;
- (id)avatarBorderDressID;
- (id)usercardOverallImage;
- (id)usercardOverallWebp;
- (id)usercardOverallWebpEnter;
- (id)usercardBorderImage;
- (id)usercardTopBorderImage;
- (id)usercardOverlayWebpEnter;
- (id)usercardOverlayWebpLoop;
- (id)usercardParallax;
- (id)secondaryButtonBorderColor;
- (id)secondaryButtonBackgroundColor;
- (id)secondaryButtonIconColor;
- (id)nicknameTextColors;
- (id)signatureTextColor;
- (id)mysteryUsercardoverallOverallImage;
- (id)skinDressID;
- (id)topOverlayUserCardParallax;
- (BOOL)isShowWhite;
- (id)userCardMainColorWithAlpha:(double)a0;
- (id)hornorWallContentColor;
- (id)followButtonTextColor;
- (id)tagsBackgroundColor;
- (id)tagsContentColor;
- (void)skinObjectInit;
- (void)prefetchDressResourceWithDressID:(id)a0;
- (void)assembleSkinData;
- (BOOL)needPreLoadResource;
- (void)preLoadResource;
- (double)openInterval;
- (id)openRateCurveArray;
- (id)closeRateCurveArray;
- (void)startLoadUserProfileSkin:(id)a0;
- (id)closeCardWebp;
- (id)visitButtonColor;
- (id)hornorWallTitleColor;
- (void).cxx_destruct;
- (void)clear;
- (double)closeInterval;
- (id)mainButton;

@end
