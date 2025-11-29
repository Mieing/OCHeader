@class UIImageView, UILabel, UIView;

@interface IESLiveInteractiveSettingGuidePanelSceneSwitch : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) BOOL isSelected;

- (void)setupGuesture;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupViews;

@end
