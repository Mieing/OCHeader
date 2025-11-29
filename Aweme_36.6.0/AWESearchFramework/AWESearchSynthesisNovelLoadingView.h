@class UILabel, AWESearchSynthesisNovelLoadingContentView;

@interface AWESearchSynthesisNovelLoadingView : UIView

@property (retain, nonatomic) AWESearchSynthesisNovelLoadingContentView *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) BOOL darkMode;

- (void)setLoadImage:(id)a0;
- (void)setDarkLoadImage:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
