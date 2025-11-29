@class UILabel, UIImageView, UIStackView;

@interface IESLiveBigPartyOpenGuideSettingPanelSwitchButton : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) UIStackView *labelStack;

+ (id)title:(id)a0;

- (void)buttonClickAction;
- (void)updateLabelSpacing:(BOOL)a0;
- (void)updateStyle;
- (void).cxx_destruct;
- (void)setupViews;

@end
