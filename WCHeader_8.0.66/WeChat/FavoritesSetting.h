@interface FavoritesSetting : NSObject <NSCoding>

@property (nonatomic) unsigned long long totalCapacity;
@property (nonatomic) unsigned long long usedCapacity;
@property (nonatomic) unsigned long long maxAutoDownloadSize;
@property (nonatomic) unsigned long long maxFavFileSize;
@property (nonatomic) BOOL bIsFirstTimeInFav;
@property (nonatomic) int showFavIntroViewTimes;
@property (nonatomic) BOOL bHasCalculateFavItemSize;
@property (nonatomic) BOOL bHasFixedUploadStatus;
@property (nonatomic) BOOL useNewTagLogic;
@property (nonatomic) BOOL hasGetFavSetting;
@property (nonatomic) BOOL enableMusicList;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
