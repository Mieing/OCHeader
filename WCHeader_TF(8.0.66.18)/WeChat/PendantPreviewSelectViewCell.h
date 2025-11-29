@class UILabel, UIImageView, UIView;

@interface PendantPreviewSelectViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIView *separatorView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupTitle:(id)a0 isSeleceted:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
