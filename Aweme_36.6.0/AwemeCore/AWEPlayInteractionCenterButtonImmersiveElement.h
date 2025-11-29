@class UILabel, UIView;

@interface AWEPlayInteractionCenterButtonImmersiveElement : AWEPlayInteractionImmersiveElement

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *label;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;
- (void)tapHandler:(id)a0;

@end
