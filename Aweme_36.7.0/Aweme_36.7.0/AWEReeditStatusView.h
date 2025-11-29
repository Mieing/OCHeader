@class UIImageView, AWEAwemeModel, UILabel, UIButton;

@interface AWEReeditStatusView : UIView

@property (retain, nonatomic) UIButton *reeditButton;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descrLabel;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) id /* block */ onTapReedit;

- (void)onTapReedit:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setupUI;

@end
