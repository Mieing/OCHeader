@interface ACCPublishMergeImageSingleConfig : ACCPublishMergeImageBaseConfig

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) long long index;
@property (nonatomic) struct CGSize { double width; double height; } externalCanvasSize;
@property (nonatomic) BOOL isLivePhotoFirstFrame;

- (id)init;

@end
