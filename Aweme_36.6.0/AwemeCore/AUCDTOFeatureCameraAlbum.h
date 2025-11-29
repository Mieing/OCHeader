@class AUCDTOPageAlbum;

@interface AUCDTOFeatureCameraAlbum : MTLModel

@property (retain, nonatomic) AUCDTOPageAlbum *pageAlbum;
@property (nonatomic) long long albumEntry;

- (void).cxx_destruct;
- (id)init;

@end
