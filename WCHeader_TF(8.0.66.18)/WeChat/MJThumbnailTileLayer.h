@class UIImage, CAShapeLayer;

@interface MJThumbnailTileLayer : MJReusableTileLayer {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _separatorLineBounds;
}

@property (nonatomic) long long taskID;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double separatorLineWidthPixels;
@property (readonly, nonatomic) CAShapeLayer *separatorLineLayer;

- (id)init;
- (void)setReusableAttributes:(id)a0;
- (void)prepareForReuse;
- (void)layoutSublayers;
- (void)updateSeparatorLine;
- (void).cxx_destruct;

@end
