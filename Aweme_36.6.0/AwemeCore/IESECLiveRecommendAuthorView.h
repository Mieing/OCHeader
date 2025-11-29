@class UIImageView, UILabel, IESECUIImageView;

@interface IESECLiveRecommendAuthorView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) IESECUIImageView *hotIconImageView;
@property (retain, nonatomic) UILabel *hotLabel;
@property (retain, nonatomic) IESECUIImageView *adTagImageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
