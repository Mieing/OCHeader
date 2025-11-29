@class UIImageView, IESECGoodsFeedTitleViewConfig, IESECGoodsTitleLabel;

@interface IESECGoodsFeedTitleView : UIView

@property (retain, nonatomic) IESECGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) UIImageView *indicateImageView;
@property (retain, nonatomic) IESECGoodsFeedTitleViewConfig *config;

- (void)configUI;
- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;

@end
