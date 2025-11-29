@class AUCDTOFeatureAlbum, AUCDTOBasicAlbum;

@interface AUCDTOPageAlbum : AUCDTOPageConfig

@property (retain, nonatomic) AUCDTOBasicAlbum *basic;
@property (retain, nonatomic) AUCDTOFeatureAlbum *feature;

- (void).cxx_destruct;
- (id)init;

@end
