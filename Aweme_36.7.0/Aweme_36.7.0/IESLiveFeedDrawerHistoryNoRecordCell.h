@class IESLiveFeedDrawerHistoryNoRecordModel, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveFeedDrawerHistoryNoRecordCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) IESLiveFeedDrawerHistoryNoRecordModel *model;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)bindModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonAction;
- (void)setupUI;

@end
