@interface OMJImageSessionStartupSettings : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } previewLimitedPixelSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailSize;

- (id)initWithPreviewLimitedPixelSize:(struct CGSize { double x0; double x1; })a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;
- (id)description;

@end
