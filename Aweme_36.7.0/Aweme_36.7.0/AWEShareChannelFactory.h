@interface AWEShareChannelFactory : NSObject

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
+ (id)shareTypesOfAweme:(id)a0;
+ (id)channnelsWithContext:(id)a0 task:(id)a1;
+ (id)removeChannels:(id)a0 withContext:(id)a1;
+ (BOOL)canShareAmeme:(id)a0;
+ (id)allShareTypesOfDSPMusic;
+ (BOOL)isToppedProhibitedVideoWithContext:(id)a0;
+ (BOOL)canOnlyDeleteWithContext:(id)a0;
+ (BOOL)canOnlyUnfavoriteWithContext:(id)a0;
+ (BOOL)isPrivateFavoritedVideoWithContext:(id)a0;
+ (id)channelsFilteredByVibilityForFavoritedWithContext:(id)a0;
+ (BOOL)isNonPublicVideoWithContext:(id)a0;
+ (id)channelsFilteredByVibilityWithContext:(id)a0;
+ (BOOL)canOnlyDownloadAndDeleteAndAddToCustomWithContext:(id)a0;
+ (BOOL)canOnlyDownloadAndDeleteWithContext:(id)a0;
+ (id)shareTypesForXiguaWithContext:(id)a0;
+ (id)shareTypesForPicoVRWithContext:(id)a0;
+ (id)channelsFilteredByActionAbilityWithContext:(id)a0;
+ (id)channelsFilteredByPlayableWithContext:(id)a0;
+ (void)p_adjustDynamicSortingIfNeeded;
+ (id)allShareTypesOfAweme;
+ (id)shareTypesForAweme;
+ (id)removeUnallowedChannels:(id)a0 withContext:(id)a1;
+ (Class)aAWEShareChannelFactoryAdapterClass;
+ (id)removeCommonChannelIfNeedWithChannels:(id)a0 context:(id)a1;
+ (BOOL)p_isStudioRouterPublishType:(id)a0;
+ (id)localAllowedTypes;
+ (id)forbiddenShareTypesForOverseaUser;
+ (id)debugShareTypesOfAweme;
+ (id)commonShareTypes;
+ (BOOL)showGenarateImageChannelWithContext:(id)a0;
+ (id)updateShareChannels:(id)a0 webMetadata:(id)a1 context:(id)a2;
+ (id)commonShareTypesAddExtraChannels:(id)a0;
+ (id)allShareTypeOfSandBoxImage;
+ (id)allShareChannelsOfWeb:(id)a0 context:(id)a1;
+ (id)allShareTypesOfWeb;
+ (id)allShareChannelsOfWebView:(id)a0 context:(id)a1 task:(id)a2;
+ (id)allShareTypesOfWebView;
+ (id)allShareTypesOfWebImage;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (id)aAWEShareChannelFactoryAdapter;

@end
