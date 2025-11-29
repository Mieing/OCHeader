@class NSString, UIImageView, UIImage, UILabel;
@protocol AWENormalModeTabBarInnerViewUIConfigProtocol, AWENormalModeTabBarInnerViewDelegate;

@interface AWENormalModeTabBarVerticalView : UIView <AWENormalModeTabBarInnerView>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *updatedSelectedText;
@property (copy, nonatomic) NSString *updatedUnselectedText;
@property (retain, nonatomic) UIImage *updatedSelectedImage;
@property (retain, nonatomic) UIImage *updatedUnselectedImage;
@property (nonatomic) BOOL refreshAnimatedEnabled;
@property (retain, nonatomic) id<AWENormalModeTabBarInnerViewUIConfigProtocol> config;
@property (weak, nonatomic) id<AWENormalModeTabBarInnerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithConfig:(id)a0;

- (void)tabbarStatusDidChanged:(long long)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (BOOL)updateNormalImage:(id)a0;
- (BOOL)updateSelectedImage:(id)a0;
- (void)updateSelectedTitle:(id)a0;
- (void)updateUnSelectedTitle:(id)a0;
- (void).cxx_destruct;
- (void)updateImage;
- (void)addObserver;
- (void)layoutSubviews;
- (void)setUpViews;
- (void)updateTitle:(id)a0;

@end
