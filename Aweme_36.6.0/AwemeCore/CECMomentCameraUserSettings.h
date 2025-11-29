@class NSString;

@interface CECMomentCameraUserSettings : MTLModel <NSCoding>

@property (class, retain, nonatomic) CECMomentCameraUserSettings *p_currentUserSetting;

@property (copy, nonatomic) NSString *p_cacheKey;
@property (nonatomic) BOOL shouldAutoSaveToAlbumWhenPublish;
@property (nonatomic) BOOL shouldAutoSaveToAlbumWhenPublishExchange;
@property (nonatomic) BOOL shouldAddPolaroidFrameWhenSaveToAlbum;

+ (id)cacheKeyForCurrentUser;
+ (id)currentUserSetting;

- (void)p_saveToCache;
- (void).cxx_destruct;

@end
