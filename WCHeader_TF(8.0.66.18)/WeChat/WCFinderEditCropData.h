@interface WCFinderEditCropData : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRectInPreview;
@property (nonatomic) struct CGPoint { double x; double y; } previewScale;

- (id)initWithVideoPreviewOriginSize:(struct CGSize { double x0; double x1; })a0 resultSize:(struct CGSize { double x0; double x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
