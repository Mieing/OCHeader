@class UIImageView, UILabel, BDSCLandscapeNoticeTipViewConfig, UIButton;

@interface BDSCLandscapeNoticeTipView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *tagButton;
@property (retain, nonatomic) BDSCLandscapeNoticeTipViewConfig *config;

- (void)setupTitleWith:(id)a0;
- (void)tagButtonClick;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupSubviews;

@end
