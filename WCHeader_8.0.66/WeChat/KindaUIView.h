@class MMKViewOnClickCallback, MMKViewOnTouchCallback, UIView;
@protocol KindaUIViewDelegate;

@interface KindaUIView : UIView {
    unsigned long long m_cornerType;
    float m_radiusValue;
    BOOL m_cornerChange;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (nonatomic) BOOL disableHighlightDarkmode;
@property (weak, nonatomic) id<KindaUIViewDelegate> delegate;
@property (retain, nonatomic) UIView *hightLightMask;
@property (retain, nonatomic) MMKViewOnTouchCallback *touchCallback;
@property (retain, nonatomic) MMKViewOnClickCallback *clickCallback;
@property (nonatomic) long long expandHitWidth;
@property (nonatomic) long long expandHitHeight;
@property (nonatomic) BOOL enableHighlight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (float)getTopLeftCornerRadius;
- (float)getTopRightCornerRadius;
- (float)getBottomLeftCornerRadius;
- (float)getBottomRightCornerRadius;
- (void)setBottomLeftCornerRadius:(float)a0;
- (void)setBottomRightCornerRadius:(float)a0;
- (void)setTopLeftCornerRadius:(float)a0;
- (void)setTopRightCornerRadius:(float)a0;
- (BOOL)getDisableHighlightDarkmode;
- (void).cxx_destruct;

@end
