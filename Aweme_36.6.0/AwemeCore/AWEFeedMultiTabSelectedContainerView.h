@class UIView, UIImageView, AWEHPTopTabItemViewUIConfig;

@interface AWEFeedMultiTabSelectedContainerView : UIView

@property (retain, nonatomic) AWEHPTopTabItemViewUIConfig *config;
@property (retain, nonatomic) UIView *selectedLineView;
@property (retain, nonatomic) UIView *selectedImageContainerView;
@property (retain, nonatomic) UIImageView *lightModeImageView;
@property (retain, nonatomic) UIImageView *darkModeImageView;

- (void)setHidden:(BOOL)a0;
- (void)updateDisplayInfoWithItem:(id)a0 andRatio:(double)a1;
- (void)changeToLightTheme:(BOOL)a0;
- (id)initWithConfig:(id)a0 selectedLineView:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectedLineView:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
