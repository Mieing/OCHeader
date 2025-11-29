@class WCPayMaskViewMatrix, UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray;
@protocol WCPayImageMaskViewFilledDelegate;

@interface WCPayImageMaskView : MMImageView {
    unsigned long long _tilesX;
    unsigned long long _tilesY;
    int _tilesFilled;
    struct CGColorSpace { } *_colorSpace;
    struct CGContext { } *_imageContext;
    unsigned long long _radius;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    struct CGPoint { double x; double y; } _nowPoint;
    BOOL _testHits;
}

@property (retain, nonatomic) WCPayMaskViewMatrix *maskedMatrix;
@property (retain, nonatomic) NSMutableArray *touchPoints;
@property (readonly, nonatomic) double percentsOfImageMasked;
@property (nonatomic) id<WCPayImageMaskViewFilledDelegate> imageMaskFilledDelegate;
@property (nonatomic) BOOL isCanScratch;

- (void)updatePercent:(double)a0;
- (void)setImage:(id)a0 radius:(unsigned long long)a1;
- (void)dealloc;
- (void)initialize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTapGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })normalizeVector:(struct CGPoint { double x0; double x1; })a0;
- (void)handlePanGesture:(id)a0;
- (void)fillTileWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)fillTileWithTwoPoints:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
