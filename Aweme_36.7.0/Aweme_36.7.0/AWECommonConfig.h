@class NSString;

@interface AWECommonConfig : HTSService <AWECommonConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)followButtonPossibleTitles;
+ (BOOL)enablePrivateAccount;
+ (BOOL)enableDuet;
+ (BOOL)enableReact;
+ (BOOL)ix_enableNewRecord;
+ (BOOL)enableLivePhoto;
+ (BOOL)forbidDownloadLocal;
+ (BOOL)enableTrending;
+ (BOOL)showStarBoardInDiscover;
+ (BOOL)showMusicBoardInDiscover;
+ (unsigned long long)starBillboardType;
+ (unsigned long long)musicBillboardType;
+ (id)followButtonTitleIconForFollowStatus:(long long)a0 followerStatus:(long long)a1;
+ (id)followButtonTitleIconForTargetUser:(id)a0;
+ (BOOL)isSupport3DTouch;


@end
