@interface ACCRepoImageAlbumTransformContext : MTLModel

@property (readonly, nonatomic) BOOL isImageAlbumTransformContext;
@property (nonatomic) BOOL didHandleImageAlbum2MVVideo;
@property (nonatomic) BOOL didTransformedOnce;

- (id)initForImageAlbumEditContext;

@end
