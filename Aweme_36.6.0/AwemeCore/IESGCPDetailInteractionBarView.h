@class RACDisposable, UILabel, IESGCPDetailInteractionBarAvatarView, UIView;

@interface IESGCPDetailInteractionBarView : IESGCPDetailBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESGCPDetailInteractionBarAvatarView *avatarView;
@property (retain, nonatomic) UILabel *titleLab;
@property (retain, nonatomic) UILabel *teamStatusLab;
@property (retain, nonatomic) RACDisposable *themeConfigDispose;
@property (retain, nonatomic) RACDisposable *modelChangeDispose;
@property (nonatomic) BOOL viewDidShow;

- (void)openSchema;
- (void)bindViewModel:(id)a0;
- (void)viewExposed;
- (void)viewDidNotShow;
- (void)layoutWithThemeConfig:(id)a0;
- (void)observeThemeConfigChange;
- (void)observeModelChange;
- (void)updateUIByViewModel:(id)a0;
- (BOOL)needShowSubtitle;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
