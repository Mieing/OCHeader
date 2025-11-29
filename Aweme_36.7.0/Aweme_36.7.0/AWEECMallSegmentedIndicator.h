@class UIImageView, UIColor, UIView;

@interface AWEECMallSegmentedIndicator : UIView

@property (retain, nonatomic) UIView *liveView;
@property (retain, nonatomic) UIImageView *waveImageView;
@property (retain, nonatomic) UIColor *indicatorColor;
@property (nonatomic) long long displayStyle;

- (void)initializeData;
- (BOOL)isColor:(id)a0 equalToColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)initializeViews;

@end
