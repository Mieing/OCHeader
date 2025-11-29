@class UILabel, UIButton;

@interface ACCAIGCMultiLoraInfoSelectedCell : ACCAIGCMultiLoraInfoCollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIButton *deleteButton;

- (void)configModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
