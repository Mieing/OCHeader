@class IESLiveAdminCellItem, UIImageView, UILabel, UIView;

@interface IESLiveAdminCell : UITableViewCell

@property (retain, nonatomic) IESLiveAdminCellItem *item;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) BOOL isWhite;

- (void)renderWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setConstraints;

@end
