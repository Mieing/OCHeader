@class UIButton, UILabel, AWEIMGroupJoinCardFunctionModel;

@interface AWEIMGroupJoinFunctionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMGroupJoinCardFunctionModel *model;

- (void)configWithModel:(id)a0;
- (void)setUpLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setUpUI;

@end
