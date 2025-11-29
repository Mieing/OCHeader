@class UIStackView, UIImageView, UILabel, DVEAudioSegmentTagUIConfig;

@interface DVEAudioSegmentTag : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) float preAlpha;
@property (retain, nonatomic) DVEAudioSegmentTagUIConfig *UIConfig;

- (void)updateImage:(id)a0;
- (void)p_updateImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 UIConfig:(id)a1;
- (void)updateImageURL:(id)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)setupUI;
- (void)updateText:(id)a0;
- (void)updateCornerRadius;

@end
