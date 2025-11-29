@class AWENormalModeTabBarAvatarView, NSString, AWENormalModeTabBarIconTextViewUIConfig, UILabel, AWENormalModeTabBarGradientView;
@protocol AWENormalModeTabBarInnerViewUIConfigProtocol, AWENormalModeTabBarInnerViewDelegate;

@interface AWENormalModeTabBarIconTextView : UIView <AWENormalModeTabBarAvatarViewDelegate, AWENormalModeTabBarInnerView>

@property (readonly, nonatomic) AWENormalModeTabBarIconTextViewUIConfig *UIConfig;
@property (retain, nonatomic) AWENormalModeTabBarGradientView *gradientView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWENormalModeTabBarAvatarView *avatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWENormalModeTabBarInnerViewUIConfigProtocol> config;
@property (weak, nonatomic) id<AWENormalModeTabBarInnerViewDelegate> delegate;

+ (id)viewWithConfig:(id)a0;

- (void)tabbarStatusDidChanged:(long long)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)currentTitleText;
- (BOOL)showAvatarIconWithImage:(id)a0 animated:(BOOL)a1;
- (BOOL)updateNormalImage:(id)a0;
- (BOOL)updateSelectedImage:(id)a0;
- (BOOL)replaceDefaultNormalImage:(id)a0 defaultSelectedImage:(id)a1;
- (void)avatarHideEnd;
- (void)avatarHideBegin;
- (void)avatarShowEnd;
- (void)avatarShowBegin;
- (void)p_updateUI;
- (void)p_addObserver;
- (id)initWithUIConfig:(id)a0;
- (void)p_loadView;
- (void)p_updateImageViewImage;
- (void)p_updateImageViewAlphaState;
- (void)p_updateLabelText;
- (void)p_updateTextColor;
- (struct CGSize { double x0; double x1; })p_gradientViewSizeWithHeight:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0;

@end
