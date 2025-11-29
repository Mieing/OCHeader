@class UIImageView, UILabel, AWEIMFansGroupIntroduceIconInfo;

@interface AWEIMFansGroupAdvantageIconView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEIMFansGroupIntroduceIconInfo *model;

- (void)configWithModel:(id)a0;
- (void)handleThemeReloadNotification;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
