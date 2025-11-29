@interface AWEImageTextRefinedLayoutController : AWEBaseController <AWEImageTextRefinedLayoutControllerProtocol>

@property (nonatomic, readonly) BOOL isRefinedImageLayoutEnable;
@property (nonatomic, readonly) unsigned long long currentImageRefinedRefinedContentMode;

- (double)getImageContentTopInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTemporaryImageViewRectWithMinWHRatio;
- (void)updateImageContentViewTopInsetWithLeftInteractionMinY:(double)a0 authorElementMinY:(double)a1;
- (void)clearImageContentViewTopInset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getImageContentInsets;
- (void)setImageContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 animated:(BOOL)a1 duration:(double)a2;
- (void)updateAlbumContentModeLayout;
- (id)init;

@end
