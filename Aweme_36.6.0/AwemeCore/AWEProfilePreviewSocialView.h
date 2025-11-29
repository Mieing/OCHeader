@class UILabel;

@interface AWEProfilePreviewSocialView : UIView

@property (retain, nonatomic) UILabel *praiseTitleLabel;
@property (retain, nonatomic) UILabel *praiseCountLabel;
@property (retain, nonatomic) UILabel *followTitleLabel;
@property (retain, nonatomic) UILabel *followCountLabel;
@property (retain, nonatomic) UILabel *fansTitleLabel;
@property (retain, nonatomic) UILabel *fansCountLabel;

- (void).cxx_destruct;
- (id)userModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
