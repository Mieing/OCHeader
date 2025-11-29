@class UIImageView, IESLiveMediaCountStore, UILabel, UIView, UIButton;

@interface IESLiveMediaCountView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveMediaCountStore *store;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *operationButton;

- (void)refreshLayout:(long long)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)setupBgColorIfNeeded;
- (void)uiConfigForFIFA;
- (void)liveAccessibility;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)addTarget:(id)a0 selector:(SEL)a1;
- (void)buildView;

@end
