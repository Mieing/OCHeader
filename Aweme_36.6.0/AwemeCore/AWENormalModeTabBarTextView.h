@class AWENormalModeTabBarAvatarView, UILabel, NSString;
@protocol AWENormalModeTabBarInnerViewUIConfigProtocol, AWENormalModeTabBarInnerViewDelegate;

@interface AWENormalModeTabBarTextView : UIView <AWENormalModeTabBarAvatarViewDelegate, AWENormalModeTabBarInnerView>

@property (nonatomic) BOOL isInTitleChangedAnimation;
@property (retain, nonatomic) AWENormalModeTabBarAvatarView *avatarView;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWENormalModeTabBarInnerViewUIConfigProtocol> config;
@property (weak, nonatomic) id<AWENormalModeTabBarInnerViewDelegate> delegate;

+ (id)viewWithConfig:(id)a0;

- (void)tabbarStatusDidChanged:(long long)a0 animated:(BOOL)a1;
- (void)updateTitle:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)textColorChangedWithSelectedStatus:(BOOL)a0;
- (void)labelTransformWithStatus:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (BOOL)showAvatarIconWithImage:(id)a0 animated:(BOOL)a1;
- (void)avatarHideEnd;
- (void)avatarHideBegin;
- (void)avatarShowEnd;
- (void)avatarShowBegin;
- (void)configLabelCenter;
- (void)textFontChangedWithSelectedStatus:(BOOL)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)updateTitle:(id)a0;

@end
