@class AWEDCFeedConfig, UIView;

@interface AWEDCFeedSkeletonCell : AWEDCFeedBaseCell

@property (retain, nonatomic) UIView *coverImage;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *userInfo;
@property (weak, nonatomic) AWEDCFeedConfig *config;

- (void)awe_themeDidChange:(long long)a0;
- (void)configCellWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateColor;

@end
