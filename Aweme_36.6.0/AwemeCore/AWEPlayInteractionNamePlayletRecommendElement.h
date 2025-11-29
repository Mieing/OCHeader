@class UIImageView, UILabel;

@interface AWEPlayInteractionNamePlayletRecommendElement : AWEPlayInteractionPlayletRecommendElement

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *trailLabel;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;
- (void)tapHandler:(id)a0;

@end
