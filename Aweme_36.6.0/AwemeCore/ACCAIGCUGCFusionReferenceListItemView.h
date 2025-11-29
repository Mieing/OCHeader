@class UIImageView, ACCAIGCUGCFrameReferenceModel, UIView, UILabel, AWEGradientView;
@protocol ACCAIGCUGCFusionReferenceListItemViewDelegate;

@interface ACCAIGCUGCFusionReferenceListItemView : UICollectionViewCell

@property (retain, nonatomic) ACCAIGCUGCFrameReferenceModel *model;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *deselectIcon;
@property (retain, nonatomic) UILabel *videoReferenceTipLabel;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (weak, nonatomic) id<ACCAIGCUGCFusionReferenceListItemViewDelegate> delegate;

+ (id)viewIdentifier;

- (void)updateWithTheme:(long long)a0;
- (void)updateToImageReference;
- (void)updateToVideoReference;
- (void)didClickedDeselectIcon;
- (void)updateWithReferenceModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;

@end
