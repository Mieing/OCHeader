@class UILabel, UIImageView, UIButton;

@interface AWEPrivateAccountSettingGuideView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (copy, nonatomic) id /* block */ singleTapBlock;

- (void)p_closeButtonClicked;
- (void)p_configUI;
- (void)p_singleTaped;
- (void)trackWhenDismissClicked;
- (void)trackWhenButtonClicked;
- (id)textForTitleLabel;
- (id)textForSubtitleLabel;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
