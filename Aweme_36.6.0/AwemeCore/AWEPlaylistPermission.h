@interface AWEPlaylistPermission : AWEBaseApiModel

@property (nonatomic) BOOL editEnable;
@property (nonatomic) BOOL editSongEnable;
@property (nonatomic) BOOL privacyEnable;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL deleteEnable;

+ (id)JSONKeyPathsByPropertyKey;

@end
