@class AWEMiniLunaPlaylistInfoModel;

@interface AWEMiniLunaCreatePlaylistResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEMiniLunaPlaylistInfoModel *playlist;

+ (id)playlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
