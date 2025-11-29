@interface AWEImageTextRefinedLayoutComponent : AWEImageTextBaseComponent <AWEImageTextLifeCycleProtocol, AWEImageTextRefinedLayoutComponentProtocol> {
    void /* unknown type, empty encoding */ elementRect;
    void /* unknown type, empty encoding */ currentImageContentTopInset;
    void /* unknown type, empty encoding */ imageContentInsets;
    void /* unknown type, empty encoding */ needUpdateImageContentViewLayoutWithAnthorPostion;
    void /* unknown type, empty encoding */ leftInteractionMinY;
    void /* unknown type, empty encoding */ authorElementMinY;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageLayoutConfigCacheDict;
}

@property (nonatomic, readonly) BOOL enableRefinedImageLayout;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getImageContentInsets;
- (void)setImageContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 animated:(BOOL)a1 duration:(double)a2;
- (void)updateAlbumContentModeLayout;
- (void)updateCurrentImageContentViewLayout;
- (double)getImageContentTopInset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTemporaryImageViewRectWithMinWHRatio;
- (void)updateImageContentViewTopInsetWithLeftInteractionMinY:(double)a0 authorElementMinY:(double)a1;
- (void)clearImageContentViewTopInset;
- (id)registerProtocol;
- (unsigned long long)getRefinedImageContentMode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithManager:(id)a0;

@end
