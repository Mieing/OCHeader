@class UILabel, IESLiveImageView;

@interface IESLiveAudienceInteractiveSettingKTVStageModeSwitchItemView : UIView

@property (retain, nonatomic) IESLiveImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ didClicked;

- (void)updateSelected:(BOOL)a0;
- (void)stageBtnAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
