@interface AWEMusicPermissionModel : AWEBaseApiModel

@property (nonatomic) BOOL shareEnable;
@property (nonatomic) BOOL storyShare;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL downloadEnable;
@property (nonatomic) BOOL playlistAvailable;

+ (id)JSONKeyPathsByPropertyKey;

@end
