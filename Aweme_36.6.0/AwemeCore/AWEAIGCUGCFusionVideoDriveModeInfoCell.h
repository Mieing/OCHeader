@class CAShapeLayer, AWEAIGCUGCFusionVideoReferenceTypeModel, UIVisualEffectView, UIView, UILabel, BDImageView;

@interface AWEAIGCUGCFusionVideoDriveModeInfoCell : UICollectionViewCell

@property (retain, nonatomic) AWEAIGCUGCFusionVideoReferenceTypeModel *model;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *backgroundImageView;
@property (retain, nonatomic) UIVisualEffectView *contentBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (nonatomic) BOOL isBorderVisible;
@property (retain, nonatomic) CAShapeLayer *borderShapeLayer;

+ (id)identifier;

- (void)updateSelected:(BOOL)a0;
- (void)setupBorderLayer;
- (void)updateDisabled:(BOOL)a0;
- (void)updateBorderShapeLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
