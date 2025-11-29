@class ACCImageAlbumPlayerItemContainerView;

@interface ACCImageAlbumEditorPlayerItemModel : NSObject

@property (readonly, nonatomic) ACCImageAlbumPlayerItemContainerView *playerItemView;
@property (nonatomic) BOOL needUpdate;

- (void).cxx_destruct;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;

@end
