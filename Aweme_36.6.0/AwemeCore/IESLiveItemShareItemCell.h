@class IESLiveItemShareItemCellViewModel, UIImageView, UILabel, UIButton;

@interface IESLiveItemShareItemCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *operationBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *describeLabel;
@property (retain, nonatomic) IESLiveItemShareItemCellViewModel *viewModel;
@property (copy, nonatomic) id /* block */ operationBtnClickBlock;

- (void)operationBtnClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)updateWithViewModel:(id)a0;

@end
