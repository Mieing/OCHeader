@class NSString;

@interface AWETeenGeckoResourcesManager : NSObject <AWEDigitalWellbeingMessage>

@property (nonatomic) double lastSyncTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPrefixToAk;
+ (id)cdnUrlPrefix;
+ (id)stockCustomPath;
+ (void)setImageForImageView:(id)a0 contentsOfFile:(id)a1;
+ (BOOL)hasDownloadAudioResouces;
+ (id)audioDataForName:(id)a0;
+ (id)channelForDiscover;
+ (id)channelForEncyCard;
+ (id)channelForAuthorMiniCard;
+ (id)channelForLottieAsset;
+ (id)channelForImageAsset;
+ (id)channelForSpecies;
+ (id)channelForIPAlbum;
+ (id)channelForItemList;
+ (id)channelForItemListHotfix;
+ (id)channelForAlbumList;
+ (id)channelForH5;
+ (id)imagePathForName:(id)a0;
+ (id)channelForAudioAsset;
+ (id)audioPathForName:(id)a0;
+ (id)bundleForDiscover;
+ (id)bundleForEncyCard;
+ (id)bundleForAuthorMiniCard;
+ (id)bundleForIPAlbum;
+ (BOOL)hasDownloadImageResouces;
+ (id)sharedInstance;
+ (id)imageWithContentsOfFile:(id)a0;
+ (id)accessKey;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)syncGeckoResources;
- (BOOL)hasDownloadLottieResouces;
- (id)lottiePathForName:(id)a0;
- (void)p_configResourceLoader;
- (id)lottieDataForName:(id)a0;
- (id)init;
- (void)dealloc;

@end
