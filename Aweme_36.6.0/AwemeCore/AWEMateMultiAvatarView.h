@class NSArray, UIImageView, CAShapeLayer;

@interface AWEMateMultiAvatarView : UIView

@property (copy, nonatomic) NSArray *models;
@property (retain, nonatomic) UIImageView *centerAvatar;
@property (retain, nonatomic) UIImageView *leftAvatar;
@property (retain, nonatomic) UIImageView *rightAvatar;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) CAShapeLayer *leftLayer;
@property (retain, nonatomic) CAShapeLayer *rightLayer;

- (void)configWithModel:(id)a0 avatarView:(id)a1 avatarWidth:(double)a2;
- (double)p_smallAvatarGap;
- (void)updateSidesAvatarLayer:(BOOL)a0;
- (id)addLayerWithWidth:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 cropDirectionLeft:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithModels:(id)a0;

@end
