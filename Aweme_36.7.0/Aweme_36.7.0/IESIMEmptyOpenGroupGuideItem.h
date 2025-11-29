@class UIButton, UILabel;

@interface IESIMEmptyOpenGroupGuideItem : UIStackView

@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleDescriptionLabel;

- (void)setupSubview;
- (void).cxx_destruct;
- (id)init;
- (void)configureWithModel:(id)a0;

@end
