@class UICollectionViewCell, IESECCommentEvaluatorViewConfig, UILabel, UIView, UIButton;
@protocol IESECCommentEvaluatorDelegate;

@interface IESECCommentEvaluatorView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<IESECCommentEvaluatorDelegate> delegate;
@property (retain, nonatomic) IESECCommentEvaluatorViewConfig *config;
@property (weak, nonatomic) UICollectionViewCell *cell;

- (void)tapCancelButton;
- (void)tapEntranceButton;
- (BOOL)isGoldCardEvaluatorView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
