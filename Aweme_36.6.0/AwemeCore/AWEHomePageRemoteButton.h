@class NSString, UIImageView, UIVisualEffectView, UILabel, AWEHomePageRemoteContext, AWEHomePageRemoteCommonButtonDataModel;

@interface AWEHomePageRemoteButton : UIView <AWEHomePageRemoteViewProtocol>

@property (retain, nonatomic) AWEHomePageRemoteContext *context;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) long long themeType;
@property (retain, nonatomic) AWEHomePageRemoteCommonButtonDataModel *buttonDataModel;
@property (nonatomic) long long status;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentViewBackgroundColor;
- (void)updateImageAndColor;
- (void)updateWithItemDataModel:(id)a0;
- (id)iconImageUrlArray;
- (id)iconPlaceholderImage;
- (void)updateWithItemDataModel:(id)a0 context:(id)a1;
- (double)homePageRemoteViewHeight;
- (void)homePageThemeDidChange:(long long)a0;
- (void)reloadWhenPanelShowWithItemDataModel:(id)a0;
- (void).cxx_destruct;
- (id)titleText;
- (void)updateStatus:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateText:(id)a0;
- (id)titleLabelTextColor;

@end
