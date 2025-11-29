@class UIImageView, UILabel, UIView;

@interface AWEPlayInteractionNameImmersiveElement : AWEPlayInteractionImmersiveElement

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *trailLabel;
@property (retain, nonatomic) UIView *actionView;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;
- (void)tapHandler:(id)a0;

@end
