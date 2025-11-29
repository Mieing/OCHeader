@class NSString, AWEMiniLunaPlaylistInfoModel;

@interface AWEMiniLunaCollectionMixedInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemType;
@property (retain, nonatomic) AWEMiniLunaPlaylistInfoModel *playlist;

+ (id)playlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
