@interface AWEACCAlbumExtensionLiveSelectMedia : ACCAlbumExtension

@property (nonatomic) long long mode;
@property (nonatomic) long long photoCountLimit;
@property (nonatomic) long long videoCountLimit;
@property (nonatomic) long long durationLimit;
@property (nonatomic) long long maxImageFileSize;

- (void)albumDidClickSelectAssetsButtonWithSelectedAssetes:(id)a0 targetAsset:(id)a1 isSelected:(BOOL)a2;

@end
