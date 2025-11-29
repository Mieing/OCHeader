@class UIImageView, UIColor;

@interface AWEKnowledgeAlbumPreviewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIColor *imageBackgroundColor;

+ (id)reuseIdentifier;

- (void)p_setupViews;
- (void)updateSelected:(BOOL)a0;
- (void)updateWithModel:(id)a0 placeholderImageForAlbum:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateColor;

@end
