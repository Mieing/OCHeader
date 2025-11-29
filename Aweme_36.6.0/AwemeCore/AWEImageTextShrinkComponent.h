@interface AWEImageTextShrinkComponent : AWEImageTextBaseComponent <AWEImageTextLifeCycleProtocol, AWEMultiContentImpl.ImageTextShrinkComponentProtocol> {
    void /* unknown type, empty encoding */ shrinkImageView;
}

@property (nonatomic) BOOL albumContentShrink;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)getCurrentContentView;
- (id)getCurrentContentViewBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentContentViewRect:(id)a0;
- (void)updateShrinkAlbumContentMode:(BOOL)a0;
- (void)endShrinkAlbumContentAnimation;
- (id)registerProtocol;
- (void).cxx_destruct;
- (id)init;
- (id)initWithManager:(id)a0;

@end
