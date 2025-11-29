@class BDSCLandscapeNoticeTipViewConfig, UILabel, UIImageView;

@interface BDSCLandscapeNoticeTipButton : UIButton

@property (retain, nonatomic) BDSCLandscapeNoticeTipViewConfig *config;
@property (retain, nonatomic) UILabel *scLabel;
@property (retain, nonatomic) UIImageView *scImageView;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupSubviews;

@end
