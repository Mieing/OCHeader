@class UIImageView;

@interface MMProgressView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_rectLayout;
    float m_fProgress;
    float m_fTopWidth;
}

@property (retain, nonatomic) UIImageView *m_imgvBack;
@property (retain, nonatomic) UIImageView *m_imgvFront;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 BackImg:(id)a1 FrontImg:(id)a2 Layout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 CapWidth:(float)a4 CapHeight:(float)a5;
- (id)initBrandProgressWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)disableBrandProgress;
- (void)enableBrandProgress;
- (void)SetProgress:(float)a0;
- (void)SetFrontImageByName:(id)a0;
- (void)setProgressFontRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
