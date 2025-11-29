@class CAGradientLayer, UIImageView, UIVisualEffectView, UILabel, UIView;
@protocol AWEIMMixPhotoInitiatePageSheetCollectionViewCellDelegate;

@interface AWEIMMixPhotoInitiatePageSheetCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIVisualEffectView *subtitleBackgroundView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) CAGradientLayer *maskViewGradientLayer;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *selectView;
@property (retain, nonatomic) UIImageView *transferOtherAppImageView;
@property (retain, nonatomic) UIVisualEffectView *aiTagLabelBackgroundView;
@property (retain, nonatomic) UILabel *aiTagLabel;
@property (retain, nonatomic) UIImageView *aiTagImageView;
@property (weak, nonatomic) id<AWEIMMixPhotoInitiatePageSheetCollectionViewCellDelegate> delegate;

+ (id)identifier;

- (void)renderWithViewModel:(id)a0;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_configComponents;
- (void)setAITagHiden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
