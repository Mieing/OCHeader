@class UIColor, UIImageView, NSURL, UILabel, NSMutableArray;

@interface BDXMapKitAnnotationView : BDXMapKitBaseAnnotationView {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _downloadImageLeaveMutex;
}

@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UILabel *contentLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSMutableArray *contentLabelArray;
@property (retain, nonatomic) NSMutableArray *contentLabelSizeArray;
@property (nonatomic) BOOL isFoldedAnnotation;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned long long contentAlignment;
@property (nonatomic) unsigned long long imageGroupMode;
@property (nonatomic) double contentOffset;
@property (copy, nonatomic) UIColor *contentShadowColor;

- (void)startAnnotationAnimation:(id)a0;
- (void)clearContentLabels;
- (void)drawImageGroupWithImages:(id)a0 imageSizeArray:(id)a1;
- (void)_downloadImageWithUrlArray:(id)a0 completed:(id /* block */)a1;
- (void)drawContentLabelWithContent:(id)a0 withAttributes:(id)a1 maxSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCollisionFrame;
- (void)_layoutWithContentBottomAlignment;
- (void)_layoutWithContentCenterAlignment;
- (BOOL)isCollidedAnnotationWithOther:(id)a0 areaPercent:(double)a1;
- (void)foldAnnotationView;
- (void)unfoldAnnotationView;
- (void)setImageURLArray:(id)a0 imageSizeArray:(id)a1;
- (void)setMutableContent:(id)a0 withAttributes:(id)a1 maxSizeArray:(id)a2;
- (void)setContent:(id)a0 withAttributes:(id)a1 maxSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setZIndex:(long long)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setAngle:(double)a0;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
