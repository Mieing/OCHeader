@class NSString, UIImageView, UILabel, UIView, DUXCheckBox;
@protocol AWEShareCellItem;

@interface AWESharePanelListVerticalCell : UITableViewCell <AWESharePanelListCell>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) id<AWEShareCellItem> viewModel;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UILabel *shareLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bgTap;
- (void)iconTap;
- (void)titleTap;
- (void)additionViewTap;
- (void)configShareLabel:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)tableViewCell;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
