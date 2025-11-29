@class UIColor, UIImage, NSArray;

@interface WCNetworkMediaSlider : UISlider {
    double m_cacheTime;
    double m_thumbLeftMargin;
    double m_thumbRightMargin;
}

@property (retain, nonatomic) UIColor *frontgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *cacheColor;
@property (nonatomic) double sliderHeight;
@property (nonatomic) BOOL showCacheProgress;
@property (nonatomic) BOOL roundedRect;
@property (nonatomic) BOOL showThumb;
@property (retain, nonatomic) UIImage *thumbImage;
@property (copy, nonatomic) NSArray *markArr;

- (id)init;
- (void)initView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCacheProgress:(double)a0;
- (void)resizeCacheProgress;
- (id)getBackgroundImage;
- (id)getBackgroundImage:(BOOL)a0;
- (id)getFrontgroundImage;
- (id)getFrontgroundImage:(BOOL)a0;
- (void)drawMarkArr:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;

@end
