@class UIImageView, IESECGoodsTitleLabel;

@interface IESECGoodsFeedImmersiveTitleView : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) IESECGoodsTitleLabel *goodsTitleLabel;
@property (retain, nonatomic) UIImageView *indicateImageView;

- (void)configUI;
- (void)addGesture;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
