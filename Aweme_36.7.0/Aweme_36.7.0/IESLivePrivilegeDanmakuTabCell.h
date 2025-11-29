@class IESLivePrivilegeDanmakuTabViewModel, UIImageView, UILabel, UIView;

@interface IESLivePrivilegeDanmakuTabCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tabImageView;
@property (retain, nonatomic) UIImageView *lockIconView;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLivePrivilegeDanmakuTabViewModel *viewModel;
@property (nonatomic) BOOL isLandscapeMode;

- (void)bindViewModel:(id)a0;
- (void)bindSelecteAction;
- (void)active;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)inactive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
