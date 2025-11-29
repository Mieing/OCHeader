@class UILabel, NSString;
@protocol AWETeenModeTabBarInnerViewUIConfigProtocol;

@interface AWETeenModeTabBarTextView : UIView <AWETeenModeTabBarInnerView>

@property (nonatomic) BOOL isInTitleChangedAnimation;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) id<AWETeenModeTabBarInnerViewUIConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithConfig:(id)a0;

- (void)tabbarStatusDidChanged:(long long)a0 animated:(BOOL)a1;
- (void)updateTitle:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)textColorChangedWithSelectedStatus:(BOOL)a0;
- (void)labelTransformWithStatus:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)updateTitle:(id)a0;

@end
