@class UIStackView, IESIMContactPickerFunctionsItemModel, UIImageView, UITapGestureRecognizer, UIView, IESIMContactPickerRoundView, UILabel;

@interface IESIMContactPickerFunctionsItemView : UIView

@property (retain, nonatomic) IESIMContactPickerRoundView *contentView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *centerContainer;
@property (retain, nonatomic) UIStackView *centerTopContainer;
@property (retain, nonatomic) UIStackView *centerBottomContainer;
@property (retain, nonatomic) UIStackView *rightContainer;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) IESIMContactPickerFunctionsItemModel *model;
@property (retain, nonatomic) UITapGestureRecognizer *tap;

- (void)configWithModel:(id)a0;
- (void)p_layoutUI;
- (double)__duxFontSizeIfNecessary:(double)a0;
- (void)p_configItemRoundCornersWithModel:(id)a0;
- (void)p_configtitleLabelWithModel:(id)a0;
- (void)p_configAvatarImageViewWithModel:(id)a0;
- (void)p_configIconImageViewWithModel:(id)a0;
- (void)p_configBottomLineWithModel:(id)a0;
- (void)p_setupTapGesture;
- (void)p_didTapped;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
