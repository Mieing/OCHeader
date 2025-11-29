@interface AWEMusicNewPermissionModel : AWEBaseDataModel

@property (nonatomic) BOOL shareEnable;
@property (nonatomic) BOOL storyShare;
@property (nonatomic) BOOL dspPlay;
@property (nonatomic) BOOL playlistAvailable;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL downloadEnable;

+ (id)JSONKeyPathsByPropertyKey;

@end
