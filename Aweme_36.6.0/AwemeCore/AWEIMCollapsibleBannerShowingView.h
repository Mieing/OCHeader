@class AWEIMCollapsibleBannerViewModel, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMCollapsibleBannerShowingViewDelegate;

@interface AWEIMCollapsibleBannerShowingView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerContentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIButton *removeBtn;
@property (retain, nonatomic) UIView *removeBtnMaskView;
@property (nonatomic) long long tailType;
@property (nonatomic) double imChatFontScale;
@property (nonatomic) double duxFontScale;
@property (nonatomic) BOOL adaptToBigFont;
@property (retain, nonatomic) AWEIMCollapsibleBannerViewModel *viewModel;
@property (weak, nonatomic) id<AWEIMCollapsibleBannerShowingViewDelegate> delegate;

- (void)awe_themeWillChange:(long long)a0;
- (void)didClickView;
- (void)resetForReuse;
- (void)__setupLayout;
- (void)__updateTailType:(long long)a0;
- (void)__updateShadowLayer;
- (void)__didTapRemove;
- (double)__sizeInBigFont:(double)a0;
- (void)__changeContainerColorWithThemeStyle:(long long)a0;
- (void)updateLayoutForPadSplitting;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
